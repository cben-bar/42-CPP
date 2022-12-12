/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:49:03 by beni              #+#    #+#             */
/*   Updated: 2022/12/12 16:16:06 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const & origin);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        

    private:
        int                 _n;
        static int const    _bit = 8;
};

#endif

