/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:17:24 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/15 17:16:35 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

///////////////////////////////////////
//*/ */ */ */CONSTRUCTORS /* /* /* /*//
///////////////////////////////////////

RPN::RPN()
{
	return ;
}

RPN::RPN(const RPN &origin)
{
	*this = origin;
	return ;
}

RPN	&RPN::operator=(const RPN &origin)
{
	if (this == &origin)
		return (*this);
	this->_stack = origin._stack;
	return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

RPN::~RPN()
{
	return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::stack<int> RPN::getStack() const
{
	return (this->_stack);
}

void	RPN::parse(std::string input, RPN calculator)
{
	if(input.empty())
	{
		std::cout << PARMA << "Error: invalid input." << std::endl;
		return;
	}
	
	size_t idx = 0;
	while (isspace(input[idx]))
		idx++;
	if (idx == input.length())
	{
		std::cout << PARMA << "Error: invalid input." << std::endl;
		return ;
	}
	
	for(int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != '/' && input[i] != '*' && input[i] != ' ')
		{
			std::cout << PURPLE << "Errror." << std::endl;
			return ;
		}
	}
	calculator.run(input);
	return ;
}

///////////////////////////////////////
//*/ */ */ */      RUN    /* /* /* /*//
///////////////////////////////////////

bool	RPN::reverseCalcul(int token, std::stack<int> &lifo)
{
	if (this->_stack.size() < 2)
		return false;
	int lastTop = lifo.top();
	lifo.pop();
	switch (token)
	{
		case '*':
		{
			int res = lifo.top() * lastTop;
			lifo.top() = res;
			break;
		}
		case '+':
		{	
			int res = lifo.top() + lastTop;
			lifo.top() = res;
			break;
		}
		case '-':
		{
			int res = lifo.top() - lastTop;
			lifo.top() = res;
			break;
		}
		case '/':
		{
			if (lastTop == 0)
				return false;
			int res = lifo.top() / lastTop;
			lifo.top() = res;
			break;
		}
		default:
			break;
	}
	return true;
}

void	RPN::run(std::string input)
{
	int	i = 0;
	while(input[i])
	{
		if (input[i] == ' ')
			i++;
		else if (isdigit(input[i]))
		{
			this->_stack.push(input[i] - 48);
			i++;
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
		{
			if(!reverseCalcul(input[i], this->_stack))
			{
				std::cout << PARMA << "Error." << std::endl;
				return ;
			}
			i++;
		}
	}
	if (this->_stack.size() == 1)
		std::cout << MAGENTA << this->_stack.top() << std::endl;
	else
		std::cout << PARMA << "Error." << std::endl;
}

void	RPN::cleanStack(std::stack<int> lifo)
{
	while (!lifo.empty())
		lifo.pop();
}

///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void RPN::printStack(std::stack<int> &lifo)
{
    std::stack<int> tempStack = lifo;
	std::cout << YELLOW << "print ==>";
    while (!tempStack.empty())
	{
        std::cout << YELLOW << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}