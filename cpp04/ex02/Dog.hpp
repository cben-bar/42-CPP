/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:46:39 by beni              #+#    #+#             */
/*   Updated: 2023/01/20 15:24:24 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog();
        Dog(const Dog &origin);
        Dog &operator=(const Dog &origin);
        virtual ~Dog();
        
        virtual void    makeSound() const;
        Brain           &getBrain() const;
    
    private:
        Brain   *_brain;
};

#endif