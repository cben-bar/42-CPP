/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:45 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 10:50:59 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////
Dog::Dog()
{
    this->_type = "Dog";
    std::cout << SEA_GREEN << "Dog default constructor called." << std::endl;
    
}

Dog::Dog(const Dog &origin)
{
    *this = origin;
    std::cout << PINE_GREEN << "Dog copy constructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Dog &Dog::operator=(const Dog &origin)
{
    this->_type = origin.getType();
    std::cout << FLOWER_GREEN << "Animal copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Dog::~Dog()
{
    std::cout << SOFT_GREEN << "Dog destructor called" << std::endl;
    return ;
}


///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    Dog::makeSound() const
{
    std::cout << GREY << "Wow wow" << std::endl;
    return ;
}