/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:17 by beni              #+#    #+#             */
/*   Updated: 2023/01/20 15:19:58 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << PARMA << "AAnimal default constructor called." << std::endl;
    return ;
}

AAnimal::AAnimal(const AAnimal &origin)
{
    *this = origin;
    std::cout << VIOLET << "AAnimal copy constructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

AAnimal &AAnimal::operator=(const AAnimal &origin)
{
    if (this == &origin)
        return (*this);
    this->_type = origin.getType();
    std::cout << PASTEL_PURPLE << "AAnimal copy assignment operator called." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

AAnimal::~AAnimal()
{
    std::cout << PARMA << "AAnimal destructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string AAnimal::getType() const
{
    return (this->_type);
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    AAnimal::makeSound() const
{
    std::cout << GREY << "AAnimal sound" << std::endl;
    return ;
}