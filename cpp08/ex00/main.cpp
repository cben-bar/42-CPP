/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:22:26 by beni              #+#    #+#             */
/*   Updated: 2023/03/09 16:21:32 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main()
{
    std::cout << PARMA << "\t\tLST TEST" << std::endl << std::endl;
    
    std::list<int>  lstInt;
    lstInt.push_back(1);
    lstInt.push_back(2);
    lstInt.push_back(3);
    lstInt.push_back(4);
    lstInt.push_back(5);
    lstInt.push_back(6);
    try
    {
        easyfind(lstInt, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    try
    {
        easyfind(lstInt, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    try
    {
        easyfind(lstInt, 6);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    
    std::cout << std::endl << PARMA << "\t\tVECTOR TEST INT" << std::endl << std::endl;
    
    std::vector<int>    vectorInt(6);
    vectorInt[0] = 1;
    vectorInt[1] = 2;
    vectorInt[2] = 3;
    vectorInt[3] = 4;
    vectorInt[4] = 5;
    vectorInt[5] = 6;
    try
    {
        easyfind(vectorInt, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    
    std::cout << std::endl << PARMA << "\t\tVECTOR TEST CHAR" << std::endl << std::endl;
    std::vector<char>    vectorChar(6);
    vectorChar[0] = 'a';
    vectorChar[1] = 'b';
    vectorChar[2] = 'c';
    vectorChar[3] = 'd';
    vectorChar[4] = 'e';
    vectorChar[5] = 'f';
    try
    {
        easyfind(vectorChar, 97);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    std::cout << WHITE;
    return (0);
}