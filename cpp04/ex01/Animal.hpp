/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:41:19 by beni              #+#    #+#             */
/*   Updated: 2023/01/12 16:02:20 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#define WHITE           "\x1B[37m"
#define STRIKETHROUGH   "\x1B[9m"
#define GREY            "\x1B[30m"
#define DARK_BLUE       "\x1b[38;5;4m"
#define OCEAN_BLUE      "\x1b[38;5;19m"
#define PARMA           "\x1b[38;5;105m"
#define BLUE            "\x1B[34m"
#define STORM_BLUE     "\x1b[38;5;12m"
#define CYAN            "\x1B[36m"
#define GREEN           "\x1B[32m"
#define SOFT_GREEN      "\x1b[38;5;6m"
#define SEA_GREEN       "\x1b[38;5;6m"
#define PASTEL_GREEN    "\x1b[38;5;159m"
#define FLOWER_GREEN    "\x1b[38;5;46m"
#define FLUO_GREEN      "\x1b[38;5;46m"
#define PINE_GREEN      "\x1b[38;5;28m"
#define POOL_GREEN      "\x1b[38;5;50m"
#define RED             "\x1B[31m"
#define BLOOD_RED       "\x1b[38;5;125m"
#define YELLOW          "\x1B[33m"
#define PASTEL_YELLOW   "\x1b[38;5;229m"
#define MAGENTA         "\x1b[35m"
#define PASTEL_PINK     "\x1b[38;5;213m"
#define PASTEL_PURPLE   "\x1b[38;5;147m"
#define PURPLE          "\x1b[38;5;140m"
#define VIOLET          "\x1b[38;5;129m"
#define POWDERY_PINK    "\x1b[38;5;225m"
#define PASTEL_ORANGE   "\x1b[38;5;224m"
#define SUN             "\x1b[38;5;222m"
#define TAN             "\x1b[38;5;172m"

class Animal
{
    public:
        Animal();
        Animal(const Animal &origin);
        Animal &operator=(const Animal &origin);
        virtual ~Animal();

        std::string     getType() const;
        
        virtual void    makeSound() const;
        
    protected:
        std::string _type;
};

#endif