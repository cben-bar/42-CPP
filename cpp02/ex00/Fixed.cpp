/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:01:28 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 16:14:07 by beni             ###   ########.fr       */
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

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void Fixed::setRawBits(const int raw)
{
    this->_n = raw;
    return ;
}