/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:09:38 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/08 14:05:16 by cben-bar         ###   ########.fr       */
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
    BitcoinExchange exchange;

    std::ifstream inputFile(av[1]);
    if (inputFile.is_open() == FALSE)
	{
        std::cerr << SUN << "Error opening file." << std::endl;
        return (1);
    }
    std::string inputLine;
    while (getline(inputFile, inputLine))
	{
        // std::cout << PASTEL_YELLOW << "inputLine ==>" << inputLine << std::endl;
        if (exchange.isLineToParse(inputLine))
            exchange.run(inputLine, exchange.getDataMap());
    }
    inputFile.close();
    return 0;
}