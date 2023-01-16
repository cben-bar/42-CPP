/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 10:50:53 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << DARK_BLUE << "Cat default constructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &origin)
{
    *this = origin;
    std::cout << BLUE << "Cat copy constructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Cat &Cat::operator=(const Cat &origin)
{
    this->_type = origin.getType();
    std::cout << STORM_BLUE << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Cat::~Cat()
{
    std::cout << DARK_BLUE << "Cat destructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    Cat::makeSound() const
{
    std::cout << GREY << "Meow meow" << std::endl;
    return ;
}