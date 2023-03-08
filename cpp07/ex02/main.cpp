/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:57:30 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/08 18:20:07 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL 750

int main()
{
    std::cout << MAGENTA << "\t\tPERSONNAL TESTS" << std::endl;
    std::cout << std::endl << MAGENTA << "\t\tEmpty tab" << std::endl;
    try
    {
        Array<int>  intTab;
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }

    try
    {
        int * a = new int();
        std::cout << PARMA << *a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }

    std::cout << std::endl << MAGENTA << "\t\tString tab test" << std::endl;
    try
    {
        Array<std::string>  stringTab(5);
        std::cout << VIOLET << "Size: " << stringTab.size() << std::endl << std::endl;
        stringTab[0] = "Test";
        stringTab[1] = "me";
        stringTab[2] = "...";
        std::cout << PASTEL_YELLOW << stringTab[0] << std::endl; 
        std::cout << PASTEL_YELLOW << stringTab[1] << std::endl; 
        std::cout << PASTEL_YELLOW << stringTab[2] << std::endl; 
        std::cout << PASTEL_YELLOW << stringTab[10] << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    
    std::cout << std::endl << MAGENTA << "\t\tChar tab & construction by copy test" << std::endl;
    try
    {
        Array<char> charTab(10);
        charTab[0] = 'a';
        charTab[1] = 'b';
        charTab[2] = 'c';
        charTab[3] = 'd';
        Array<char> charTabCpy(charTab);
        for (unsigned int i = 0; i < charTab.size(); i++)
        {
            std::cout << PASTEL_PINK << "charTab[" << i << "] = " << charTab[i] << std::endl;
            std::cout << PURPLE << "charTabCpy[" << i << "] = " << charTabCpy[i] << std::endl << std::endl;
        }
        charTab[0] = 'A';
        std::cout << PASTEL_PINK << "charTab[0] = " << charTab[0] << std::endl;
        std::cout << PURPLE << "charTabCpy[0] = " << charTabCpy[0] << std::endl << std::endl;
        charTabCpy[0] = 'Z';
        std::cout << PASTEL_PINK << "charTab[0] = " << charTab[0] << std::endl;
        std::cout << PURPLE << "charTabCpy[0] = " << charTabCpy[0] << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    
    std::cout << MAGENTA << std::endl << "\t\tSUBJECT TESTS" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    std::cout << WHITE;
    return (0);
}