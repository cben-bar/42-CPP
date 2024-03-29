/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:50:07 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/07 15:19:50 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool	other_display(std::string param)
{
	if (param.compare("inf") == 0 || param.compare("inff") == 0 || param.compare("+inf") == 0 || param.compare("+inff") == 0)
	{
		std::cout << CYAN << "char: impossible" << std::endl;
		std::cout << PARMA << "char: impossible" << std::endl;
		std::cout << POOL_GREEN << "float: inff" << std::endl;
		std::cout << MAGENTA << "double: inf" << WHITE << std::endl;
		return (1);
	}
	if (param.compare("-inf") == 0 || param.compare("-inff") == 0)
	{
		std::cout << CYAN << "char: impossible" << std::endl;
		std::cout << PARMA << "char: impossible" << std::endl;
		std::cout << POOL_GREEN << "float: -inff" << std::endl;
		std::cout << MAGENTA << "double: -inf" << WHITE << std::endl;
		return (1);
	}
	else if (param.compare("nan") == 0 || param.compare("nanf") == 0)
	{
		std::cout << CYAN << "char: impossible" << std::endl;
		std::cout << PARMA << "char: impossible" << std::endl;
		std::cout << POOL_GREEN << "float: nanf" << std::endl;
		std::cout << MAGENTA << "double: nan" << WHITE << std::endl;
		return (1);
	}
	return (0);
}

void	char_display(std::string param)
{
	char c = param[0];
	long nb = strtoll(param.c_str(), NULL, 10);

	if (param.length() > 1)
		other_display(param);
	else if (c < 32 || c > 126)
		std::cout << BLOOD_RED << "char: Non displayable" << std::endl;
	else if (c < 0 || c > 126)
		std::cout << BLOOD_RED << "char: impossible" << std::endl;
	else
		std::cout << CYAN <<  "char: '" << c << "'" << std::endl;
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << PARMA << "int: impossible" << std::endl;
	else
		std::cout << PARMA << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << POOL_GREEN << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << MAGENTA << "double: " << static_cast<double>(c) << WHITE << std::endl;
}

void	int_display(std::string param)
{
	long	nb = strtol(param.data(), NULL, 10);
	
	if (nb < 32 || nb > 126)
		std::cout << BLOOD_RED << "char: Non displayable" << std::endl;
	else if (nb < 0 || nb > 126)
		std::cout << BLOOD_RED << "char: impossible" << std::endl;
	else
		std::cout << CYAN <<  "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << PARMA << "int: impossible" << std::endl;
	else
		std::cout << PARMA << "int: " << nb << std::endl;
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << POOL_GREEN << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << MAGENTA << "double: " << static_cast<double>(nb) << WHITE << std::endl;
}

void	float_display(std::string param)
{
	float nb = strtof(param.data(), NULL);

	if (nb < 32 || nb > 126)
		std::cout << BLOOD_RED << "char: Non displayable" << std::endl;
	else if (nb < 0 || nb > 126)
		std::cout << BLOOD_RED << "char: impossible" << std::endl;
	else
		std::cout << CYAN <<  "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << PARMA << "int: impossible" << std::endl;
	else
		std::cout << PARMA << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << POOL_GREEN << "float: " << nb << "f" << std::endl;
	std::cout << MAGENTA << "double: " << static_cast<double>(nb) << WHITE << std::endl;
}

void	double_display(std::string param)
{
	double nb = strtod(param.data(), NULL);
	if (nb < 32 || nb > 126)
		std::cout << BLOOD_RED << "char: Non displayable" << std::endl;
	else if (nb < 0 || nb > 126)
		std::cout << BLOOD_RED << "char: impossible" << std::endl;
	else
		std::cout << CYAN <<  "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << PARMA << "int: impossible" << std::endl;
	else
		std::cout << PARMA << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << POOL_GREEN << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << MAGENTA << "double: " << nb << WHITE << std::endl;
}