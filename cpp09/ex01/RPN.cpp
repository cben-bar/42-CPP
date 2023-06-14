/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:17:24 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/14 22:49:49 by beni             ###   ########.fr       */
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
	calculator.run(input);
	return ;
}

///////////////////////////////////////
//*/ */ */ */      RUN    /* /* /* /*//
///////////////////////////////////////

bool	RPN::reverseCalcul(int token, std::stack<int> &lifo)
{

	std::cout << "in reverseCalcul, token ==> " << token << std::endl;
	printStack(lifo);
	int val = lifo.top();
	lifo.pop();
	std::cout << STORM_BLUE << "lifo.top =>" << val << std::endl;
	switch (token)
	{
		case 42: //*
		{
			int res = val * lifo.top();
			lifo.push(res);
			break;
		}
		case 43: //+
		{
			int res = val + lifo.top();
			lifo.push(res);
			break;
		}
		case 45: //-
		{
			int res = val - lifo.top();
			lifo.push(res);
			break;
		}
		case 47: ///
		{
			int res = val / lifo.top();
			lifo.push(res);
			break;
		}
		default:
			break;
	}
	return true;
}

void	RPN::run(std::string input)
{
	std::cout << "input for fillstack & run =>" << input << std::endl;
	int	i = 0;
	while(input[i])
	{
		if (isdigit(input[i]))
		{
			std::cout << "in loop input[i] ==>" << input[i] << std::endl;
			this->_stack.push(atoi(&input[i]));
			i++;
		}
		if (input[i] == ' ')
			i++;
		if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
		{
			int token = input[i];
			if(reverseCalcul(token, this->_stack))
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

void RPN::printStack(std::stack<int> &lifo)
{
    std::stack<int> tempStack = lifo;
	std::cout << "print" << std::endl;
    while (!tempStack.empty())
	{
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}