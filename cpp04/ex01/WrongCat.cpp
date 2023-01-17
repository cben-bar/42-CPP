/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 16:19:15 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << RED << "WrongCat default constructor called." << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &origin)
{
    *this = origin;
    std::cout << BLOOD_RED << "WrongCat copy constructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

WrongCat &WrongCat::operator=(const WrongCat &origin)
{
    if (this == &origin)
        return (*this);
    this->_type = origin.getType();
    std::cout << TAN << "WrongCat copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat destructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    WrongCat::makeSound() const
{
    std::cout << GREY << "WrongMeow Wrongmeow" << std::endl;
    return ;
}