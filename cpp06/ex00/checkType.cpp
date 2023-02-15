/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:22:58 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/15 19:44:57 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertFromString.hpp"

bool	is_char(std::string param)
{
	if (param.length() == 1 && isprint(param[0]))
		return (true);
	return (false);
}

bool	is_int(std::string param)
{
	size_t	i = 0;

	if (param.length() == 1 && isdigit(param[i]))
		return (true);
	while (param[i])
	{
		if (param[i] == '-' && i == 0)
			i++;
		if (!isdigit(param[i]))
			return(false);
		i++;
	}
	return (true);
}

bool	is_float(std::string param)
{
	int		dot = 0;
	int		neg = 0;
	std::cout << "param.len = " << param.length() << std::endl;
	std::cout << "param.len -1 = " << param.length() -1 << std::endl;
	std::cout << "param in float check is = " << param << std::endl;
	if (!param.compare("inff") || !param.compare("-inff") || !param.compare("+inff") || !param.compare("nanf"))
		return (true);
	else if (param.length())
	{
		for (size_t i = 0; i < param.length(); i++)
		{
			if (param[i] == '.')
				dot++;
			else if (param[i] == '-')
				neg++;
		}
		if (dot > 1 || neg > 1)
		{
			std::cout << "false dans dot ou neg" << std::endl;
			return (false);
		}
		for (size_t i = 0; i < param.length(); i++)
		{
			if ((param[i] == '-' && i != 0) || (param[i] == '.' && i == 0))
			{
				std::cout << "false dans - ou . pas a la bonne place" << std::endl;
				return (false);
			}
			// if ((!isdigit(param[i]) && (i != (param.length() - 1))) || (!isdigit(param[i]) && i != 0))     <---------------------PAS MARCHER THIS MIERDA
			// {
			// 	std::cout << "false dans isdigit end" << std::endl;
			// 	return (false);
			// }
			if (i != 0 || i != param.length() - 1)
			{
				if (!isdigit(param[i]) && param[i] != '.')
				{
					std::cout << "false dans isdigit end...... i = " << i << std::endl;
					return (false);
				}
			}
		}
		if(param[param.length() - 1] != 'f')
			return (false);
	}
	return (true);
}

bool	is_double(std::string param)
{
	if (!param.compare("-inf") || !param.compare("+inf") || !param.compare("nan"))
		return (true);
	else if (param.length())
	{

	}
	return (true);
}

bool	check_format(std::string param)
{
	if (is_char(param))
		convert_char(param);
	else if (is_int(param))
		convert_int(param);
	else if (is_float(param))
		convert_float(param);
	//else if (is_double(param))
	//	convert_double(param);
	else
	{
		std::cout << BLOOD_RED << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: impossible" << std::endl << "double:impossible" << std:: endl;
		return (false);
	}
	return (true);
}