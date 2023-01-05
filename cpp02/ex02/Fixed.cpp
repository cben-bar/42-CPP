/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:15 by beni              #+#    #+#             */
/*   Updated: 2023/01/05 15:40:35 by beni             ###   ########.fr       */
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

Fixed::Fixed(int const to_be_converted)    //converts to the corresponding fixed-point value..convertit l'entier en parametre en virgule fixe.
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(std::roundf(to_be_converted * (1 << this->_bits)));
    return ;
}

Fixed::Fixed(float const to_be_converted)   //converts to the corresponding fixed-point value..convertit le flottant en parametre en virgule fixe
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(std::roundf(to_be_converted * (1 << this->_bits)));
    return ;
}

Fixed::Fixed(Fixed const & origin)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Fixed   &Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */   BITWISE   /* /* /* /*//
///////////////////////////////////////

std::ostream    &operator<<(std::ostream & o, Fixed const & rhs)  //inserts floating-point representation of the fixed-point into the output stream object passed as parameter
{
    return (o << rhs.toFloat());
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

int Fixed::getRawBits() const
{
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
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

///////////////////////////////////////
//*/ */ */ */ COMPARAISON /* /* /* /*//
///////////////////////////////////////

bool    Fixed::operator>(const Fixed &rhs) const
{
    if (this->_n > rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<(const Fixed &rhs) const
{
    if (this->_n < rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>=(const Fixed &rhs) const
{
    if (this->_n >= rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<=(const Fixed &rhs) const
{
    if (this->_n <= rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator==(const Fixed &rhs) const
{
    if (this->_n == rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator!=(const Fixed &rhs) const
{
    if (this->_n != rhs.getRawBits())
        return (true);
    return (false);
}

///////////////////////////////////////
//*/ */ */ */ ARITHMETIC  /* /* /* /*//
///////////////////////////////////////

Fixed   Fixed::operator+(const Fixed &rhs) const
{

}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
    
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
    
}

Fixed   Fixed::operator/(const Fixed &rhs) const
{
    
}

Fixed   &Fixed::operator++()        //pre-increment
{

}

Fixed   Fixed::operator++(int n)    //post-increment
{

}

Fixed   &Fixed::operator--()        //pre-decrement
{

}

Fixed   Fixed::operator--(int n)    //post-decrement
{

}