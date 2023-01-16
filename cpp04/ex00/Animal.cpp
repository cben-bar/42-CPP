/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:17 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 10:50:45 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Animal::Animal() : _type("Animal")
{
    std::cout << PARMA << "Animal default constructor called." << std::endl;
    return ;
}

Animal::Animal(const Animal &origin)
{
    *this = origin;
    std::cout << VIOLET << "Animal copy constructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Animal &Animal::operator=(const Animal &origin)
{
    this->_type = origin.getType();
    std::cout << PASTEL_PURPLE << "Animal copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Animal::~Animal()
{
    std::cout << PARMA << "Animal destructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string Animal::getType() const
{
    return (this->_type);
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    Animal::makeSound() const
{
    std::cout << GREY << "Animal sound" << std::endl;
    return ;
}