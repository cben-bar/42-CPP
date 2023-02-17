/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:05 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/17 18:33:13 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool	is_char(const std::string param)
{
	if (param.length() == 1 && isprint(param[0]) && !isdigit(param[0]))
		return (true);
	return (false);
}

bool	is_int(const std::string param)
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

bool	is_float(const std::string param)
{
	int		dot = 0;
	int		neg = 0;

	if (param.length())
	{
		for (size_t i = 0; i < param.length(); i++)
		{
			if (param[i] == '.')
				dot++;
			else if (param[i] == '-')
				neg++;
			if (param[i] == '.' && i == param.length() -2)
				return (false);
		}
		if (dot != 1 || neg > 1)
			return (false);
		for (size_t i = 0; i < param.length(); i++)
		{
			if ((param[i] == '-' && i != 0) || (param[i] == '.' && i == 0))
				return (false);
			if (i != 0 && i != param.length() - 1)
			{
				if (!isdigit(param[i]) && param[i] != '.')
					return (false);
			}
		}
		if(param[param.length() - 1] != 'f')
			return (false);
	}
	return (true);
}

bool	is_double(const std::string param)
{
	int	dot = 0;
	int neg = 0;

	if (param.length())
	{
		for (size_t i = 0; i < param.length(); i++)
		{
			if (param[i] == '.')
				dot++;
			else if (param[i] == '-')
				neg++;
			if (param[i] == '.' && i == param.length() -1)
				return (false);
		}
		if (dot != 1 || neg > 1)
			return (false);
		for (size_t i = 0; i < param.length(); i++)
		{
			if ((param[i] == '-' && i != 0) || (param[i] == '.' && i == 0))
				return (false);
			if (!isdigit(param[i]) && param[i] != '.' && param[i] != '-' && param[i] != '+')
				return (false);
		}

	}
	return (true);
}

int	pars(const std::string param)
{
	double to_convert = strtod(param.c_str(), NULL);
	std::cout << "double to_convert = " << to_convert << std::endl << std::endl;
	std::cout << "string param = " << param << std::endl << std::endl;
	
	if (is_char(param))
	{
		// std::cout << "is_char" << std::endl;
		char_display(param);
		return(1);
	}
	else if (is_int(param))
	{
		// std::cout << "is_int" << std::endl;
		int_display(param, to_convert);
		return(1);
	}
	else if (is_float(param))
	{
		// std::cout << "is_float" << std::endl;
		float_display(param, to_convert);
		return(1);
	}
	else if (is_double(param))
	{
		// std::cout << "is_double" << std::endl;
		double_display(param, to_convert);
		return(1);
	}
	else
	{
		if (other_display(param))
			return(1);
	}
	// std::cout << "is_nada" << std::endl;
	return (2);
}