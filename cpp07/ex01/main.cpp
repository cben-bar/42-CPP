/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:24:13 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/07 16:39:33 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char				charTab[6] = {'0', '1', '2', '3', '4', '5'};
    int					intTab[6] = {0, 1, 2, 3, 4, 5};
	std::string			stringTab[6] = {"abc", "ABC", "ahbece", "H2G2", "4", "NULL"};

	std::cout << CYAN << "CHAR TAB" << std::endl << std::endl;
	std::cout << "const print ==>  ";
	iter(charTab, 6, print);
	std::cout <<  std::endl << std::endl;

	std::cout << SUN << "INT TAB" << std::endl << std::endl;
	std::cout << "const print ==>  ";
	iter(intTab, 6, print);
	std::cout << std::endl << "plus ==>  ";
	iter(intTab, 6, plus);
	iter(intTab, 6, print);
	std::cout << std::endl << std::endl;

	std::cout << POOL_GREEN << "STRING TAB" << std::endl << std::endl;
	std::cout << "const print ==>  ";
	iter(stringTab, 6, print);
	std::cout << std::endl << WHITE;

	return (0);
}