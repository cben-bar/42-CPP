/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:24:13 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/06 17:00:30 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char				charTab[6] = {'0', '1', '2', '3', '4', '5'};
    char				constCharTab[6] = {'0', '1', '2', '3', '4', '5'};
    int					intTab[6] = {0, 1, 2, 3, 4, 5};
    const int			constIntTab[6] = {0, 1, 2, 3, 4, 5};
	std::string			stringTab[6] = {"abc", "ABC", "ahbece", "H2G2", "4", "NULL"};
	const std::string	constStringTab[6] = {"abc", "ABC", "ahbece", "H2G2", "4", "NULL"};

	std::cout << CYAN << "CHAR TAB" << std::endl << std::endl;
	std::cout << "const print ==>  ";
	iter(constCharTab, 6, print);
	std::cout << "add ==>  ";
	iter(charTab, 6, add);
	std::cout <<  std::endl << std::endl;

	std::cout << SUN << "INT TAB" << std::endl << std::endl;
	std::cout << "const print ==>  ";
	iter(constIntTab, 6, print);
	std::cout << "add ==>  ";
	iter(intTab, 6, add);
	std::cout << std::endl << std::endl;

	std::cout << POOL_GREEN << "STRING TAB" << std::endl << std::endl;
	std::cout << "const print ==>  ";
	iter(constStringTab, 6, print);
	std::cout << "add ==>  ";
	iter(stringTab, 6, add);
	std::cout << std::endl << WHITE;

	return (0);
}