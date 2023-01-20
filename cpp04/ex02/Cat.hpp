/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:46:39 by beni              #+#    #+#             */
/*   Updated: 2023/01/20 15:23:11 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat();
        Cat(const Cat &origin);
        Cat &operator=(const Cat &origin);
        virtual ~Cat();
        
        virtual void    makeSound() const;
        Brain           &getBrain() const;
    
    private:
        Brain   *_brain;
};

#endif