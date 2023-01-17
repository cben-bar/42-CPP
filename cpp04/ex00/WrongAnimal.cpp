/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:17 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 16:18:14 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << PASTEL_YELLOW << "WrongAnimal default constructor called." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin)
{
    *this = origin;
    std::cout << YELLOW << "WrongAnimal copy constructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &origin)
{
    if (this == &origin)
        return (*this);
    this->_type = origin.getType();
    std::cout << SUN << "WrongAnimal copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

WrongAnimal::~WrongAnimal()
{
    std::cout << PASTEL_YELLOW << "WrongAnimal destructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    WrongAnimal::makeSound() const
{
    std::cout << GREY << "WrongAnimal sound" << std::endl;
    return ;
}