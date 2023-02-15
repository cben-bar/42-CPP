/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:03:10 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/15 19:17:20 by cben-bar         ###   ########.fr       */
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
	std::string param = av[1];
	std::cout << std::endl << "param depuis main = " << param << std::endl << std::endl;
	if (!check_format(param))
		return (0);
	return (0);
}