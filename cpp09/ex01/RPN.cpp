/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:17:24 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/14 17:23:00 by cben-bar         ###   ########.fr       */
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
	this->_res = origin._res;
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

int	RPN::getRes() const
{
	return (this->_res);
}

///////////////////////////////////////
//*/ */ */ */   BOOLEANS  /* /* /* /*//
///////////////////////////////////////

bool	RPN::isEmptyStack(std::stack<int> lifo) const
{
	if (lifo.empty())
		return (true);
	return (false);
}

void	RPN::parse(std::string input, RPN calculator)
{
	for(int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-' && input[i] != '/' && input[i] != '*' && input[i] != ' ')
		{
			std::cout << PURPLE << "Errror." << std::endl;
			return ;
		}
	}
	calculator.run(input, calculator);
	return ;
}

///////////////////////////////////////
//*/ */ */ */      RUN    /* /* /* /*//
///////////////////////////////////////

bool	RPN::reverseCalcul(char token, std::stack<int> lifo)
{
	std::cout << "in reverseCalcul, token ==> " << token << std::endl;
	printStack(lifo);
	int val = lifo.top();
	std::cout << STORM_BLUE << "lifo.top =>" << val << std::endl;
	return true;
}

void	RPN::run(std::string input, RPN calculator)
{
	std::cout << "input for fillstack & run =>" << input << std::endl;
	int	i = 0;
	while(input[i])
	{
		if (isdigit(input[i]))
			this->_stack.push(atoi(&input[i]));
		if (input[i] == ' ')
			i++;
		if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
		{
			if(reverseCalcul(input[i], calculator._stack))
				continue;
			else
			{
				std::cout << "Error." << std::endl;
				return ;
			}
		i++;
		}
	}
}

void	RPN::cleanStack(std::stack<int> lifo)
{
	while (!lifo.empty())
		lifo.pop();
}

///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void RPN::printStack(std::stack<int>& lifo)
{
    std::stack<int> tempStack = lifo;

    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}