/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:09:38 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/06 17:23:20 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cout << SUN << "This programe takes a file as argument." << std::endl;
		return (0);
	}

        std::ifstream file("test.csv");

    if (!file)
	{
        std::cerr << SUN << "Error opening file." << std::endl;
        return (1);
    }
    std::map<std::string, float> dataMap;

    std::string line;
    while (getline(file, line))
	{
        std::istringstream iss(line);
        std::string key;
        float value;

        if (getline(iss, key, ',') && iss >> value)
            dataMap.insert(std::pair<std::string, float>(key, value));
        else
            continue;
    }
	displayMap(dataMap);	//DEBUG

	

    file.close();
    return 0;
}