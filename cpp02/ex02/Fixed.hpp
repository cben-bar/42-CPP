/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:49:03 by beni              #+#    #+#             */
/*   Updated: 2023/01/05 15:39:41 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const int to_be_converted);
        Fixed(const float to_be_converted);
        Fixed(const Fixed & origin);

        Fixed &operator=(const Fixed & rhs);

        int     getRawBits() const;
        void    setRawBits(const int raw);
        float   toFloat() const;
        int     toInt() const;

        bool    operator>(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed &rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;

        Fixed   operator+(const Fixed &src) const;
        Fixed   operator-(const Fixed &src) const;
        Fixed   operator*(const Fixed &src) const;
        Fixed   operator/(const Fixed &src) const;


        Fixed   &operator++();      //pre-increment
        Fixed   operator++(int n);  //post-increment
        Fixed   &operator--();      //pre-decrement
        Fixed   operator--(int n);  //post-decrement

// Une fonction membre statique min prenant en paramètres deux références sur des nombres à virgule fixe et qui retourne le plus petit d’entre eux.
        static Fixed        &min(Fixed &n1, Fixed &n2);

// Une fonction membre statique min prenant en paramètres deux références sur des nombres à virgule fixe constants et qui retourne le plus petit d’entre eux.
        static const Fixed  &min(const Fixed &n1, const Fixed &n2);

// Une fonction membre statique max prenant en paramètres deux références sur des nombres à virgule fixe et qui retourne le plus grand d’entre eux.
        static Fixed        &max(Fixed &n1, Fixed &n2);
        
// Une fonction membre statique max prenant en paramètres deux références sur des nombres à virgule fixe constants et qui retourne le plus grand d’entre eux.
        static const Fixed  &max(const Fixed &n1, const Fixed &n2);
    
    private:
        int                 _n;
        static const int    _bits = 8;
};

std::ostream    &operator<<(std::ostream & o, Fixed const & rhs);

#endif

