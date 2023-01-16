/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:39:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 16:14:00 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << WHITE << "\t\tSUBJECT TEST" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << std::endl << WHITE << "\t\tANIMAL ARRAY TEST" << std::endl;
    
    Animal  *animalArray[6];
    for (int i = 0; i < 6; i++)
    {
        std::cout << WHITE << i << std::endl;
        if (i % 2)
            animalArray[i] = new Cat();
        else
            animalArray[i] = new Dog();
    }

    std::cout << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << PARMA << "animalArray[" << i << "]" << " is " << animalArray[i]->getType() << "." << std::endl;
        animalArray[i]->makeSound();
        delete animalArray[i];
        std::cout << std::endl;
    }

    std::cout << WHITE << "\t\tFUNNY IDEA TEST" << std::endl;
    Dog stupid;
    Cat devil;

    stupid.getBrain().setIdea(1, "I am hungry!");
    stupid.getBrain().setIdea(2, "I am always hungry..");
    stupid.getBrain().setIdea(3, "Did I think i was hungry?");
    stupid.getBrain().setIdea(0, "I am a dog, maybe a duck.");


    return 0;
}