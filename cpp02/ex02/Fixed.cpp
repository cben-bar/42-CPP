/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:15 by beni              #+#    #+#             */
/*   Updated: 2023/01/06 10:52:29 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _n(0)
{
    return ;
}

Fixed::~Fixed()
{
    return ;
}

Fixed::Fixed(int const to_be_converted)    //converts to the corresponding fixed-point value..convertit l'entier en parametre en virgule fixe.
{
    this->setRawBits(std::roundf(to_be_converted * (1 << this->_bits)));
    return ;
}

Fixed::Fixed(float const to_be_converted)   //converts to the corresponding fixed-point value..convertit le flottant en parametre en virgule fixe
{
    this->setRawBits(std::roundf(to_be_converted * (1 << this->_bits)));
    return ;
}

Fixed::Fixed(Fixed const & origin)
{
    *this = origin;
    return ;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Fixed   &Fixed::operator=(Fixed const & rhs)
{
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

Fixed   &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1 < n2)
        return (n1);
    return (n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1 < n2)
        return (n1);
    return (n2);
}

Fixed   &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1 > n2)
        return (n1);
    return (n2);
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1 > n2)
        return (n1);
    return (n2);
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
    float   add;

    return (Fixed(add = this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
    float   sub;
    
    return (Fixed(sub = this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
    float   mul;

    return (Fixed(mul = this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &rhs) const
{
    float   div;

    return (Fixed(div = this->toFloat() / rhs.toFloat()));
}

Fixed   &Fixed::operator++()
{
    this->_n++;

    return (*this);
}

Fixed   Fixed::operator++(int n)
{
    Fixed   ret = (*this);
    
    (void)n;
    ++(*this);

    return (ret);    
}

Fixed   &Fixed::operator--()
{
    this->_n--;

    return (*this);
}

Fixed   Fixed::operator--(int n)
{
    Fixed   ret = (*this);
    
    (void)n;
    --(*this);

    return (ret);
}