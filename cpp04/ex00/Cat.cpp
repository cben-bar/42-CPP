/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 16:17:49 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Cat::Cat()
{
    this->_type = "cat";
    std::cout << DARK_BLUE << "Cat default constructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &origin)
{
    *this = origin;
    std::cout << BLUE << "Cat copy constructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Cat &Cat::operator=(const Cat &origin)
{
    if (this == &origin)
        return (*this);
    this->_type = origin.getType();
    std::cout << STORM_BLUE << "Cat copy assignment operator called." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Cat::~Cat()
{
    std::cout << DARK_BLUE << "Cat destructor called." << std::endl;
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