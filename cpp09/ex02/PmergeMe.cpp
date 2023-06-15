/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:18:48 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/15 19:30:15 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

///////////////////////////////////////
//*/ */ */ */CONSTRUCTORS /* /* /* /*//
///////////////////////////////////////

PmergeMe::PmergeMe()
{
	return ;
}
		
		
		
PmergeMe &PmergeMe::operator=(const PmergeMe &origin)
{
	if (this == &origin)
		return (*this);
	return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

PmergeMe::~PmergeMe()
{
	return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////


///////////////////////////////////////
//*/ */ */ MEMBERS FUNCTIONS /* /* /*//
///////////////////////////////////////

bool PmergeMe::isValidInput(std::string input) const
{
    long val = 0;
    
    if(input.empty())
	{
        std::cout << "Error: empty input" << std::endl;
        return false;
    }
    for(size_t i = 0; i < input.size(); i++)
    {
        if(!isdigit(input[i]))
		{
            std::cout << "Error: invalid input [pas digit]" << std::endl;
            return false;
        }
    }
    val = atol(input.c_str());
    if(val < INT_MIN || val > INT_MAX)
	{
        std::cout << "Error: invalid value [out of accepted range]" << std::endl;
        return false;
    }
    return true;
}

void	PmergeMe::setList(int val)
{
	this->_lst.push_back(val);
}

void	PmergeMe::setDeque(int val)
{
	this->_deque.push_back(val);
}

///////////////////////////////////////
//*/ */ */ */   METHODS   /* /* /* /*//
///////////////////////////////////////

void	PmergeMe::run()
{
	this->displayList(this->_lst);
	this->displayDeque(this->_deque);
}

///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void	PmergeMe::displayList(std::list<int> lst)
{
	std::cout << TAN << "==============LIST==============" << std::endl;
	std::list<int>::iterator it;
	for (it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << "=================================" << std::endl;
}

void	PmergeMe::displayDeque(std::deque<int> deque)
{
	std::cout << SUN << "==============DEQUE==============" << std::endl;
	std::deque<int>::iterator it;
	for (it = deque.begin(); it != deque.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << "=================================" << std::endl;
}