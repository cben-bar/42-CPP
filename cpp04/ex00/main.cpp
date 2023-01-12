/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:39:43 by beni              #+#    #+#             */
/*   Updated: 2023/01/12 19:59:28 by beni             ###   ########.fr       */
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
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << WHITE << j->getType() << " " << std::endl;
    std::cout << WHITE << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    ///////////////////////////////////////
    //*/ */ */ */DELETES ADDED/* /* /* /*//
    ///////////////////////////////////////
    delete(i);
    delete(j);
    delete(meta);

    std::cout << WHITE << "\t\tPERSONAL TEST" << std::endl;

    Animal  hairy_thing;
    Dog     stupid;
    Cat     devil;
    Dog     stinky = stupid;

    std::cout << std::endl;
    std::cout << WHITE << hairy_thing.getType() << ": is the type of hairy_thing" << std::endl;
    std::cout << WHITE << stupid.getType() <<  ": is the type of stupid" << std::endl;
    std::cout << WHITE << devil.getType() <<  ": is the type of devil" << std::endl;
    std::cout << WHITE << stinky.getType() <<  ": is the type of stinky" << std::endl;
    std::cout << std::endl;
    std::cout << WHITE << "Sound of animal (hairy_thing)" << std::endl; 
    hairy_thing.makeSound();
    std::cout << WHITE << "Sound of dog (stupid)" << std::endl; 
    stupid.makeSound();
    std::cout << WHITE << "Sound of cat (devil)" << std::endl; 
    devil.makeSound();
    std::cout << WHITE << "Sound of dog (stinky)" << std::endl; 
    stinky.makeSound();

    std::cout << std::endl;
    std::cout << WHITE << "\t\tPERSONAL TEST" << std::endl;

    WrongAnimal snake;
    WrongCat    dumbo;
    std::cout << WHITE << snake.getType() <<  ": is the type of snake" << std::endl;
    std::cout << WHITE << dumbo.getType() <<  ": is the type of dumbo" << std::endl;
    std::cout << std::endl;
    std::cout << WHITE << "Sound of WrongAnimal (snake)" << std::endl; 
    snake.makeSound();
    std::cout << WHITE << "Sound of WrongCat (dumbo)" << std::endl; 
    dumbo.makeSound();
    std::cout << std::endl;

    return 0;
}