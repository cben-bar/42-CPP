/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:15 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 16:14:43 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _n(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int to_be_converted)    //converts to the corresponding fixed-point value..convertit l'entier en parametre en virgule fixe.
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(std::roundf(to_be_converted * (1 << this->_bits)));
    return ;
}

Fixed::Fixed(const float to_be_converted)   //converts to the corresponding fixed-point value..convertit le flottant en parametre en virgule fixe
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(std::roundf(to_be_converted * (1 << this->_bits)));
    return ;
}

Fixed::Fixed(const Fixed & origin)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
    return ;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    if (this == &rhs)
        return (*this);
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, const Fixed & rhs)  //inserts floating-point representation of the fixed-point into the output stream object passed as parameter
{
    return (o << rhs.toFloat());
}

int Fixed::getRawBits() const
{
    return (this->_n);
}

void Fixed::setRawBits(const int raw)
{
    this->_n = raw;
    return ;
}

float Fixed::toFloat( void ) const  //that converts the fixed-point value to a floating-point value..convertit la valeur en virgule fixe en nombre à virgule flottante.
{
    float   converted_value_f;
    return (converted_value_f = (float)this->_n / (1 << this->_bits));   
}

int Fixed::toInt( void ) const  //that converts the fixed-point value to an integer value..convertit la valeur en virgule fixe en nombre entier.
{
    int converted_value_i;
    return (converted_value_i = std::roundf(this->_n / (1 << this->_bits)));
}