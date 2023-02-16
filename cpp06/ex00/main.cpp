/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:03:10 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/16 21:47:45 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertFromString.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << PURPLE << "This program takes as parameter a string representation of a C++ literal in its most common form." << WHITE << std::endl;
		return (0);
	}
	const std::string param = av[1];
	if (!check_convert(param, av[1]))
		std::cout << BLOOD_RED << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: impossible" << std::endl << "double:impossible" << std:: endl;
	return (0);
}