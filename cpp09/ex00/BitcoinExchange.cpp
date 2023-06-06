/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:12:43 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/06 17:25:18 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

///////////////////////////////////////
//*/ */ */ */   BOOLEANS  /* /* /* /*//
///////////////////////////////////////

bool	isValidValue(float value)
{
	if (value < 0 || value > 1000)
		return (FALSE);
	return (TRUE);
}

///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void	displayMap(std::map<std::string, float> dataMap)
{
	int i = 0;
	for (std::map<std::string, float>::const_iterator it = dataMap.begin(); it != dataMap.end(); ++it)
	{
		i++;
		std::cout << PARMA << i << "\t==> Key : " << it->first << "\t\tValue : " << it->second << WHITE << std::endl;
	}
}