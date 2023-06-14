/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:09:38 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/14 11:34:01 by cben-bar         ###   ########.fr       */
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
    // int i = ac;
    // int j = 1;
    BitcoinExchange exchange;

    // while (j != i)
    // {
        std::ifstream inputFile(av[1]);
        if (inputFile.is_open() == FALSE)
        {
            std::cerr << SUN << "Error opening file." << std::endl;
            return (1);
        }
        std::string inputLine;
        while (getline(inputFile, inputLine))
        {
            if (exchange.isLineToParse(inputLine))
                exchange.run(inputLine, exchange.getDataMap());
        }
        inputFile.close();
    //     j++;
    // }
    return 0;
}