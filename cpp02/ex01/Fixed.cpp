/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:15 by beni              #+#    #+#             */
/*   Updated: 2022/12/12 16:47:32 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:01:28 by beni              #+#    #+#             */
/*   Updated: 2022/12/12 16:10:53 by beni             ###   ########.fr       */
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

Fixed::Fixed(int const to_be_converted)
{
    //Un constructeur prenant un entier constant en paramètre
    //et qui convertit celui- ci en virgule fixe.
    //Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’ex00.
    return ;
}

Fixed::Fixed(float const to_be_converted)
{
    //Un constructeur prenant un flottant constant en paramètre
    //et qui convertit celui-ci en virgule fixe.
    //Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’ex00.
    return ;
}

Fixed::Fixed(Fixed const & origin)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operstor called" << std::endl;
    this->_n = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    //Une surcharge de l’opérateur d’insertion («) qui insère une représentation en virgule flottante
    //du nombre à virgule fixe dans le flux de sortie (objet output stream) passé en paramètre.
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
    return ;
}

float Fixed::toFloat( void ) const
{
    //qui convertit la valeur en virgule fixe en nombre à virgule flottante.
}

int Fixed::toInt( void ) const
{
    //qui convertit la valeur en virgule fixe en nombre entier.
}