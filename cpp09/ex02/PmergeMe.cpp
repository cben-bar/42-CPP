/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:18:48 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/16 16:01:50 by cben-bar         ###   ########.fr       */
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

std::deque<int> PmergeMe::getDeque() const
{
	return (this->_deque);
}

std::list<int> PmergeMe::getList() const
{
	return (this->_lst);
}



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

std::list<int> PmergeMe::mergeIt(const std::list<int>& left, const std::list<int>& right)
{
  std::list<int> result;

  std::list<int>::const_iterator leftIt = left.begin();
  std::list<int>::const_iterator rightIt = right.begin();

  while (leftIt != left.end() && rightIt != right.end())
  {
    if (*leftIt < *rightIt)
	{
      result.push_back(*leftIt);
      ++leftIt;
    } 
	else
	{
      result.push_back(*rightIt);
      ++rightIt;
    }
  }

  // Ajouter les éléments restants de la liste de gauche
  while (leftIt != left.end())
  {
    result.push_back(*leftIt);
    ++leftIt;
  }

  // Ajouter les éléments restants de la liste de droite
  while (rightIt != right.end())
  {
    result.push_back(*rightIt);
    ++rightIt;
  }

  return result;
}

std::list<int> PmergeMe::mergeSort(const std::list<int>& input)
{
  if (input.size() <= 1)
  {
    return input;
  }

  std::list<int> left, right;
  std::list<int>::const_iterator it = input.begin();
  int mid = input.size() / 2;

  for (int i = 0; i < mid; ++i)
  {
    left.push_back(*it);
    ++it;
  }

  for (size_t i = mid; i < input.size(); ++i)
  {
    right.push_back(*it);
    ++it;
  }

  left = mergeSort(left);
  right = mergeSort(right);

  return mergeIt(left, right);
}

///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void	PmergeMe::displayList(std::list<int> lst)
{
	std::cout << CYAN << "==============LIST==============" << std::endl;
	std::list<int>::iterator it;
	for (it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << "=================================" << std::endl;
}

void	PmergeMe::displayDeque(std::deque<int> deque)
{
	std::cout << POOL_GREEN << "==============DEQUE==============" << std::endl;
	std::deque<int>::iterator it;
	for (it = deque.begin(); it != deque.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl << "=================================" << std::endl;
}