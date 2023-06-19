/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:18:48 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/19 17:34:27 by cben-bar         ###   ########.fr       */
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
    if(input.empty())
	{
        std::cout << "Error: empty input" << std::endl;
        return false;
    }
    for(size_t i = 0; i < input.size(); i++)
    {
        if(!isdigit(input[i]))
		{
            std::cout << "Error: invalid input" << std::endl;
            return false;
        }
    }
    long val = atol(input.c_str());
    if(val < 0 || val > INT_MAX)
	{
        std::cout << "Error: invalid value" << std::endl;
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

std::list<int> PmergeMe::mergeLst(const std::list<int>& left, const std::list<int>& right)
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

std::list<int> PmergeMe::mergeSortLst(const std::list<int>& input)
{
  if (input.size() <= 1)
    return input;

  std::list<int> left, right;
  std::list<int>::const_iterator it = input.begin();
  int mid = input.size() / 2;

  for (int i = 0; i < mid; ++i)
  {
    left.push_back(*it);
    ++it;
  }

  while (it != input.end())
  {
    right.push_back(*it);
    ++it;
  }

  left = mergeSortLst(left);
  right = mergeSortLst(right);

  this->_lst = mergeLst(left, right);
  return (this->_lst);

}

std::deque<int> PmergeMe::mergeDeque(std::deque<int>& deque, int left, int middle, int right)
{
    int size1 = middle - left + 1;
    int size2 = right - middle;

    std::deque<int> leftDeque;
    std::deque<int> rightDeque;

    for (int i = 0; i < size1; i++)
        leftDeque.push_back(deque[left + i]);
    for (int j = 0; j < size2; j++)
        rightDeque.push_back(deque[middle + 1 + j]);

    int i = 0, j = 0, k = left;

    while (i < size1 && j < size2)
	{
        if (leftDeque[i] <= rightDeque[j])
		{
            deque[k] = leftDeque[i];
            i++;
        }
		else
		{
            deque[k] = rightDeque[j];
            j++;
        }
        k++;
    }

    while (i < size1)
	{
        deque[k] = leftDeque[i];
        i++;
        k++;
    }

    while (j < size2)
	{
        deque[k] = rightDeque[j];
        j++;
        k++;
    }
	return deque;
}

std::deque<int> PmergeMe::mergeSortDeque(std::deque<int>& deque, int left, int right)
{
    if (left < right)
	{
        int middle = left + (right - left) / 2;

        mergeSortDeque(deque, left, middle);
        mergeSortDeque(deque, middle + 1, right);

        mergeDeque(deque, left, middle, right);
    }
	return deque;
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