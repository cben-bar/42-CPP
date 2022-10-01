/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:33:10 by beni              #+#    #+#             */
/*   Updated: 2022/10/01 15:58:10 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

void printCmd()
{
    std::cout << "PhoneBook accept 3 commands: ADD, SEARCH & EXIT" << std::endl << "Enter your choice:" << std::endl ;
}

int main(int ac, char **av)
{
    (void)av;
    std::string input;
    if (ac != 1)
    {
        std::cout << "No argument needed" << std::endl;
        return (0);
    }
    while (1)
    {
        printCmd();
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            //kekipass pr ADD?
        }
        else if (input == "SEARCH")
        {
            //kekipass pr SEARCH?
        }
        else if (input == "EXIT")
            return (0);
    }
    return (0);
}