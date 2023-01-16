/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:02:40 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 11:16:12 by beni             ###   ########.fr       */
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