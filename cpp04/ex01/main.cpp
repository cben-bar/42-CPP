/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:39:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 15:58:13 by beni             ###   ########.fr       */
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
    Cat cuteDevil = devil;
    std::cout << std::endl << TAN << "\t\tDOG IDEAS TEST" << std::endl;
    stupid.getBrain().setIdea(0, "Oh, it's poop! Happy!");
    stupid.getBrain().setIdea(1, "I am hungry!");
    stupid.getBrain().setIdea(2, "I am always hungry..");
    stupid.getBrain().setIdea(3, "Did I think i was hungry?");
    stupid.getBrain().setIdea(4, "I am a dog, maybe a duck.");
    stupid.getBrain().setIdea(101, "Happy!");
    std::cout << SUN << stupid.getBrain().getIdea(1) << std::endl;
    std::cout << SUN << stupid.getBrain().getIdea(2) << std::endl;
    std::cout << SUN << stupid.getBrain().getIdea(3) << std::endl;
    std::cout << SUN << stupid.getBrain().getIdea(0) << std::endl;
    std::cout << SUN << stupid.getBrain().getIdea(101) << std::endl;
    cuteDevil.getBrain().setIdea(4, "I am hell. Hello.");
    std::cout << std::endl << TAN << "\t\tCAT IDEAS TEST" << std::endl;
    std::cout << SUN << cuteDevil.getBrain().getIdea(4) << std::endl << std::endl;
    return 0;
}