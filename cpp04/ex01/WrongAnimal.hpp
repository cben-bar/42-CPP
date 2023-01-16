/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:37:48 by beni              #+#    #+#             */
/*   Updated: 2023/01/12 19:45:43 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

#define RED             "\x1B[31m"
#define BLOOD_RED       "\x1b[38;5;125m"
#define YELLOW          "\x1B[33m"
#define PASTEL_YELLOW   "\x1b[38;5;229m"
#define SUN             "\x1b[38;5;222m"
#define TAN             "\x1b[38;5;172m"
#define GREY            "\x1B[30m"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &origin);
        WrongAnimal &operator=(const WrongAnimal &origin);
        ~WrongAnimal();

        std::string getType() const;
        void        makeSound() const;
        

    protected:
        std::string _type;
};

#endif