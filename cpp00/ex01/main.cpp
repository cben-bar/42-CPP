/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:33:10 by beni              #+#    #+#             */
/*   Updated: 2022/10/02 21:39:40 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int     isDigit(std::string indexInput)
{
    int i;

    i = 0;
    while (indexInput[i])
    {
        if (!isdigit(indexInput[i]))
            return (0);
        i++;
    }
    return (1);
}

int     indexer()
{
    std::string indexInput;
    
    while (std::getline(std::cin, indexInput)) 
    {
        if (indexInput.empty() || !isDigit(indexInput) || indexInput.size() > 1)
            std::cout << "Choose an index : ";
        else if (std::stoi(indexInput) < 0 || std::stoi(indexInput) > 7)
            std::cout << "Choose an index : ";
        else
            return (std::stoi(indexInput));
        std::cin.clear();
    }
    return (0);
}

void    topicPrinter()
{
    std::cout << std::endl;
    std::cout << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::setw(10) << "First name";
    std::cout << "|";
    std::cout << std::setw(10) << "Last name";
    std::cout << "|";
    std::cout << std::setw(10) << "Nick name";
    std::cout << "|";

}

void    printCmd()
{
    std::cout << "PhoneBook accept 3 commands: ADD, SEARCH & EXIT" << std::endl << "Enter your choice:" << std::endl ;
}

int main(int ac, char **av)
{
    (void)av;
    Phonebook   Phonebook;
    std::string buffer;
    int         added;
    int         i;
    int         index;

    added = 0;
    index = 0;
    if (ac != 1)
    {
        std::cout << "No argument needed" << std::endl;
        return (0);
    }
    while (1 && !std::cin.eof())
    {
        printCmd();
        std::getline(std::cin, buffer);
        if (buffer == "ADD")
        {
            Phonebook.setContact(added);
            if (added == 7)
                added = 0;
            else
                added++;
        }
        else if (buffer == "SEARCH")
        {
            topicPrinter();
            i = -1;
            while (++i < 8)
                Phonebook.getContact(i);
            std::cout << std::endl;
            std::cout << "Choose an index :";
            index = indexer();
        }
        else if (buffer == "EXIT")
            return (0);
    }
    return (0);
}