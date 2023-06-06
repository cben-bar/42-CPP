/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:09:38 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/06 13:00:01 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << SUN << "This programe takes a file as argument." << std::endl;
		return (0);
	}
	std::ifstream file(av[1]);
	if (!file)
	{
		std::cerr << SUN << "Error opening file." << std::endl;
		file.close();
		return (1);
	}
	std::string line;
	while (std::getline(file, line, '|'))
	{
		
	}
	return (0);
}