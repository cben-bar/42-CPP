/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:45 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 17:15:48 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Dog::Dog(): _brain(new Brain())
{
    this->_type = "Dog";
    std::cout << SEA_GREEN << "Dog default constructor called." << std::endl;
    
}

Dog::Dog(const Dog &origin): _brain(new Brain())
{
    *this = origin;
    std::cout << PINE_GREEN << "Dog copy constructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Dog &Dog::operator=(const Dog &origin)
{
    this->_type = origin.getType();
    *(this->_brain) = origin.getBrain();
    std::cout << FLOWER_GREEN << "Animal copy assignment operator called." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Dog::~Dog()
{
    delete this->_brain;
    std::cout << SOFT_GREEN << "Dog destructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

Brain   &Dog::getBrain() const
{
    return (*(this->_brain));
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    Dog::makeSound() const
{
    std::cout << GREY << "Wow wow" << std::endl;
    return ;
}