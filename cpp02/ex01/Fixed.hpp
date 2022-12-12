/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:49:03 by beni              #+#    #+#             */
/*   Updated: 2022/12/12 16:54:23 by beni             ###   ########.fr       */
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
        Fixed(int const to_be_converted);//Un constructeur prenant un entier constant en paramètre et qui convertit celui- ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’exercice 00.
        Fixed(float constto_be_converted);//Un constructeur prenant un flottant constant en paramètre et qui convertit celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8 comme dans l’exercice 00.
        Fixed(Fixed const & origin);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;//qui convertit la valeur en virgule fixe en nombre à virgule flottante.
        int toInt() const;//qui convertit la valeur en virgule fixe en nombre entier.
        

    private:
        int                 _n;
        static const int    _bit = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif

