/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:22:58 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/17 14:43:00 by cben-bar         ###   ########.fr       */
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

bool	is_double(std::string param)
{
	int	dot = 0;
	int neg = 0;
	if (!param.compare("-inf") || !param.compare("+inf") || !param.compare("nan"))
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

	}
	return (true);
}

bool	check_convert(std::string param, char *p)
{
	double to_convert = strtod(p, NULL);
	if (is_char(param))
		convert_char(to_convert);
	else if (is_int(param))
		convert_int(to_convert);
	else if (is_float(param))
		convert_float(to_convert);
	else if (is_double(param))
		convert_double(to_convert);
	else
		return (false);
	return (true);
}
