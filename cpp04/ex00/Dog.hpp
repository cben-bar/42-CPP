/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:46:39 by beni              #+#    #+#             */
/*   Updated: 2023/01/12 16:01:40 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &origin);
        Dog &operator=(const Dog &origin);
        virtual ~Dog();
        
        virtual void    makeSound() const;
};

#endif