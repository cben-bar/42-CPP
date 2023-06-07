/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:12:43 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/07 19:56:58 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTOR /* /* /* /*//
///////////////////////////////////////

BitcoinExchange::BitcoinExchange()
{
	std::ifstream dataFile("data.csv");
   if (dataFile.is_open() == false)
	{
        std::cerr << SUN << "Error opening file." << std::endl;
    }
	std::string line;
    while (getline(dataFile, line))
	{
        std::istringstream iss(line);
        std::string key;
        float value;
        if (getline(iss, key, ',') && iss >> value)
            this->_dataMap.insert(std::pair<std::string, float>(key, value));
        else
            continue;
    }
	dataFile.close();
	displayMap(this->_dataMap);	//DEBUG
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &origin)
{
	*this = origin;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &origin)
{
	if (this == &origin)
		return (*this);
	this->_dataMap = origin.getDataMap();
	return (*this);
}


///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

BitcoinExchange::~BitcoinExchange()
{
	return;
}


///////////////////////////////////////
//*/ */ */ */  GETTER /* /* /* /*//
///////////////////////////////////////

std::map<std::string, float>	BitcoinExchange::getDataMap() const
{
	return(this->_dataMap);
}


///////////////////////////////////////
//*/ */ */ */   BOOLEANS  /* /* /* /*//
///////////////////////////////////////

bool	BitcoinExchange::isValidLine(std::string line)
{
	if (line == "date | value")
		return (FALSE);
	if (int p = line.find('|') == 11)
		return(TRUE);
	else
		std::cout << POWDERY_PINK << "Error: bad input => " << line << std::endl << std::endl;
	return (FALSE);
}

bool	BitcoinExchange::isValidValue(float value)
{
	if (value < 0 || value > 1000)
		return (FALSE);
	return (TRUE);
}

bool	BitcoinExchange::isValidDate(std::string line)
{
	(void)line;
	return (TRUE);
// check 4 digit avant le 1er tiret, 2 digit avant le 2 tiret, 2 digit avant un espace a la 10eme position
}

bool	BitcoinExchange::isValidDateFormat(std::string line)
{
	(void)line;
	return (TRUE);
	//substr depuis le pipe apres avoir verifi que le 11 char est bien un pipe et le 12 eme un espace,
	//garder du 13eme char jusqu'a la fin de la chaine
	// if(isdigit()) envoyer a 
}


///////////////////////////////////////
//*/ */ */ */      RUN    /* /* /* /*//
///////////////////////////////////////

void	BitcoinExchange::run(std::string line, std::map<std::string, float> dataMap)
{
	(void)dataMap;
	std::cout << PASTEL_GREEN << "arrivee dans run() ==>" << line << std::endl<< std::endl << WHITE;
	if (!isValidDate(line))
		return;
	// else
	// 	continue;
	// if (!isValidValue(line))
	// 	return;
	// else
	// 	convert(line, dataMap);
	return;
}

// void	BitcoinExchange::convert(std::line, std::map<std::string, float> dataMap)
// {
	// TODO
// }


///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void	BitcoinExchange::displayMap(std::map<std::string, float> dataMap)
{
	int i = 0;
	for (std::map<std::string, float>::const_iterator it = dataMap.begin(); it != dataMap.end(); ++it)
	{
		i++;
		std::cout << PARMA << i << "\t==> Key : " << it->first << "\t\tValue : " << it->second << WHITE << std::endl;
	}
}