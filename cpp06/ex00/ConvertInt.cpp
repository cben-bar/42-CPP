/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertInt.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:05:27 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/16 23:09:50 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertFromString.hpp"

void	intToChar(double to_convert)
{
	if (to_convert < 32 || to_convert > 126)
		std::cout << BLOOD_RED << "char: Non displayable" << std::endl;
	else if (to_convert < 0 || to_convert > 127)
		std::cout << BLOOD_RED << "char: impossible" << std::endl;
	else
		convert_char(to_convert);
}

void	intToInt(double to_convert)
{
	int	nb = static_cast<int>(to_convert);
	std::cout << PASTEL_PINK << "int: " << nb << std::endl;
}

void	intToFloat(double to_convert)
{
	float nb = static_cast<double>(to_convert);
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "float: " << nb << "f" << std::endl;
	
}

void	intToDouble(double to_convert)
{
	convert_double(to_convert);
}

void	convert_int(double to_convert)
{
	if (to_convert < INT_MIN || to_convert > INT_MAX)
	{
		std::cout << BLOOD_RED << "char: impossible" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std:: endl;
		return;
	}
	intToChar(to_convert);
	intToInt(to_convert);
	intToFloat(to_convert);
	intToDouble(to_convert);
}