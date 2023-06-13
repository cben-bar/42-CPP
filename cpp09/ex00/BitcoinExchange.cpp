/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:12:43 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/13 19:08:14 by cben-bar         ###   ########.fr       */
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
	// displayMap(this->_dataMap);	//DEBUG
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

bool	BitcoinExchange::isLineToParse(std::string line)
{
	if (line == "date | value")
		return (FALSE);
	if (line[4] != '-' || line[7] != '-')
	{
		std::cout << PARMA << "Error: bad input => " << line << std::endl;
		return (FALSE);
	}
	int space = line.find(' ');
	if (space != 10)
	{
		std::cout << PARMA << "Error: bad input => " << line << std::endl;
		return (FALSE);
	}
	if (line.length() > 12)
	{
		for (size_t i = 11; i < line.length(); i++)
		{
			if (line[i] == (' ') && i != 12)
			{
				std::cout << PARMA << "Error: bad input => " << line << std::endl;
				return (FALSE);
			}
		}
	}
	if (line.length() < 14)
	{
		std::cout << PARMA << "Error: bad input => " << line << std::endl;
		return (FALSE);
	}
	int p = line.find('|');
	if (p == 11)
		return(TRUE);
	else
		std::cout << PARMA << "Error: bad input => " << line << std::endl;
	return (FALSE);
}

bool	BitcoinExchange::isValidYear(std::string line)
{
	for (int i = 0; i < 4; i++)
	{
		if (isdigit(line[i]))
			continue;
		else
		{
			std::cout << PARMA << "Error: bad input => " << line << std::endl << std::endl;
			return (FALSE);
		}
	}
	std::string	yearStr(line.substr(0, 4));
	int yearInt = std::atoi(yearStr.c_str());
	if (yearInt < 2009)
	{
		std::cout << PARMA << "Error: bad input, Bitcoin was created in 2009 => " << line << std::endl;
		return (FALSE);
	}
	if (yearInt > 2023)
	{
		std::cout << PARMA << "Error: bad input, I'm not a diviner => " << line << std::endl;
		return (FALSE);
	}
	return (TRUE);
}

bool	BitcoinExchange::isValidMonth(std::string line)
{
	for (int i = 5; i < 7; i++)
	{
		if (isdigit(line[i]))
			continue;
		else
		{
			std::cout << PARMA << "Error: bad input => " << line << std::endl << std::endl;
			return (FALSE);
		}
	}
	std::string	monthStr;
	if (line[5] == '0')
		monthStr = line.substr(6, 1);
	else
		monthStr = line.substr(5, 2);
	int monthInt = std::atoi(monthStr.c_str());
	if (monthInt < 1)
	{
		std::cout << PARMA << "Error: bad input, not a valid month => " << line << std::endl;
		return(FALSE);
	}
	if (monthInt > 12)
	{
		std::cout << PARMA << "Error: bad input, not a valid month => " << line << std::endl;
		return(FALSE);
	}
	return (TRUE);
}

bool	BitcoinExchange::isValidDay(std::string line)
{
	for (int i = 8; i < 10; i++)
	{
		if (isdigit(line[i]))
			continue;
		else
		{
			std::cout << PARMA << "Error: bad input => " << line << std::endl << std::endl;
			return (FALSE);
		}
	}
	std::string	dayStr;
	if (line[8] == '0')
		dayStr = line.substr(9, 1);
	else
		dayStr = line.substr(8, 2);
	int dayInt = std::atoi(dayStr.c_str());
	if (dayInt < 1)
	{
		std::cout << PARMA << "Error: bad input, not a valid day => " << line << std::endl;
		return(FALSE);
	}
	if (dayInt > 31)
	{
		std::cout << PARMA << "Error: bad input, not a valid day => " << line << std::endl;
		return(FALSE);
	}
	return (TRUE);
}

bool	BitcoinExchange::isValidDate(std::string line)
{
	std::string dateStr(line.substr(0, 10));
	dateStr.erase(std::remove(dateStr.begin(), dateStr.end(), '-'), dateStr.end());
	int dateInt = std::atoi(dateStr.c_str());
	if (dateInt < 20090103)
	{
		std::cout << PARMA << "Error: bad input, Bitcoin was created on January 3, 2009 => " << line << std::endl;
		return (FALSE);
	}
	if (dateInt > 20230615) //a set au jour de la correc
	{
		std::cout << PARMA << "Error: bad input, I'm not a diviner => " << line << std::endl;
		return (FALSE);
	}
	std::string	yearStr(line.substr(0, 4));
	int yearInt = std::atoi(yearStr.c_str());

	std::string	monthStr;
	if (line[5] == '0')
		monthStr = line.substr(6, 1);
	else
		monthStr = line.substr(5, 2);
	int monthInt = std::atoi(monthStr.c_str());
	
	std::string dayStr;
	if (line[8] == '0')
		dayStr = line.substr(9, 1);
	else
		dayStr = line.substr(8, 2);
	int dayInt = std::atoi(dayStr.c_str());


	if (monthInt == 2)
    {
        bool isLeapYear = (yearInt % 4 == 0 && yearInt % 100 != 0) || (yearInt % 400 == 0);
        if ((isLeapYear && dayInt > 29))
        {
			std::cout << PASTEL_PINK << "The year " << yearStr << " was a leap year, but there is no corresponding date in February => " << line << std::endl;
		    return (FALSE);
		}
		else if (!isLeapYear && dayInt > 28)
		{
			std::cout << PASTEL_PINK << "The year " << yearInt << " was not a leap year, so there is no corresponding date in February => " << line << std::endl;
		    return (FALSE);
		}
    }
	if (monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11)
	{
		if (dayInt > 30)
		{
			std::cout << PARMA << "Error: bad input => " << line << std::endl;
			return (FALSE);
		}
	}
	return (TRUE);
}

bool	BitcoinExchange::isValidValue(std::string line)
{
	float value = static_cast<float>(std::atof(line.substr(12, line.length()).c_str()));
	if (value < 0)
	{
		std::cout << PARMA << "Error: not a positive number." << std::endl;
		return (FALSE);
	}
	if( value > 1000)
	{
		std::cout << PARMA << "Error: too large a number." << std::endl;
		return (FALSE);
	}
	return (TRUE);
}


///////////////////////////////////////
//*/ */ */ */      RUN    /* /* /* /*//
///////////////////////////////////////

void	BitcoinExchange::run(std::string line, std::map<std::string, float> dataMap)
{
	if (!isValidYear(line))
		return;
	if (!isValidMonth(line))
		return;
	if (!isValidDay(line))
		return;
	if (!isValidDate(line))
		return;
	if (!isValidValue(line))
		return;
	convert(line, dataMap);
	return;
}
void BitcoinExchange::convert(std::string line, std::map<std::string, float> dataMap)
{
    float value = static_cast<float>(std::atof(line.substr(12, line.length()).c_str()));
    std::string input(line.substr(12, line.length()));
    std::string key(line.substr(0, 10));

    std::map<std::string, float>::const_iterator it = dataMap.find(key);
    if (it != dataMap.end())
	{
        std::cout << POOL_GREEN << key << " => " << input << " = " << it->second * value << std::endl;
    }
	else
	{
        std::map<std::string, float>::iterator itl = dataMap.lower_bound(key);
        if (itl != dataMap.begin())
		{
            --itl;
            std::cout << SEA_GREEN << key << " => " << input << " = " << itl->second * value << std::endl;
        }
    }
}

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
