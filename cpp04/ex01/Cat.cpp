/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 15:40:16 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Cat::Cat(): _brain(new Brain())
{
    this->_type = "Cat";
    std::cout << DARK_BLUE << "Cat default constructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &origin): _brain(new Brain())
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
    *(this->_brain) = origin.getBrain();
    std::cout << STORM_BLUE << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Cat::~Cat()
{
    delete this->_brain;
    std::cout << DARK_BLUE << "Cat destructor called" << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

Brain   &Cat::getBrain() const
{
    return(*(this->_brain));
}

///////////////////////////////////////
//*/ */ */ */   FUNCTION  /* /* /* /*//
///////////////////////////////////////

void    Cat::makeSound() const
{
    std::cout << GREY << "Meow meow" << std::endl;
    return ;
}