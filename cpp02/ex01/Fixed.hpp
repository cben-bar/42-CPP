/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:49:03 by beni              #+#    #+#             */
/*   Updated: 2023/01/05 14:34:23 by beni             ###   ########.fr       */
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
        Fixed & operator=(const Fixed & rhs);
        int     getRawBits() const;
        void    setRawBits(const int raw);
        float   toFloat() const;
        int     toInt() const;
        

    private:
        int                 _n;
        static const int    _bits = 8;
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);

#endif

