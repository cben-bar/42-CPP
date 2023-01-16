/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:02:40 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 11:33:28 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Brain::Brain()
{
    std::cout << FLOWER_GREEN << "Brain default constructor called" << std::endl;
    return ;
}

Brain::Brain(const Brain &origin)
{
    *this = origin;
    std::cout << SOFT_GREEN << "Brain copy constructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Brain &Brain::operator=(const Brain &origin)
{
    std::cout << POOL_GREEN << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = origin._ideas[i];
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Brain::~Brain()
{
    std::cout << FLOWER_GREEN << "Brain destructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string Brain::getIdea(unsigned int i) const
{
    if (i <= 100)
        return (this->_ideas[i]);
    else
    {
        std::cout << WHITE << "You have no idea here!" << std::endl;
        return ("");
    }
}

///////////////////////////////////////
//*/ */ */ */    SETTER   /* /* /* /*//
///////////////////////////////////////

void        Brain::setIdea(unsigned int i, std::string idea)
{
    if (i <= 100)
        this->_ideas[i] = idea;
    else
        std::cout << WHITE << "You are missing a box!" << std::endl;
        
}