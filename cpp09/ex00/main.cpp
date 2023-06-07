/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:09:38 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/07 19:49:55 by cben-bar         ###   ########.fr       */
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
    // std::ifstream dataFile("test.csv");
    // if (dataFile.is_open() == FALSE)
	// {
    //     std::cerr << SUN << "Error opening file." << std::endl;
    //     return (1);
    // }
    // std::map<std::string, float> dataMap;

    // std::string line;
    // while (getline(dataFile, line))
	// {
    //     std::istringstream iss(line);
    //     std::string key;
    //     float value;

    //     if (getline(iss, key, ',') && iss >> value)
    //         this->dataMap.insert(std::pair<std::string, float>(key, value));
    //     else
    //         continue;
    // }
	
    // displayMap(dataMap);	//DEBUG
   
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
        if (exchange.isValidLine(inputLine))
            exchange.run(inputLine, exchange.getDataMap());
    }
    // dataFile.close();
    inputFile.close();
    return 0;
}