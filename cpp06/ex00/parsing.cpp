/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:05 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/07 15:21:04 by cben-bar         ###   ########.fr       */
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
	std::cout << std::endl << "ds pars==>" << param << std::endl << std::endl;
	if (is_char(param))
	{
		char_display(param);
		return(1);
	}
	else if (is_int(param))
	{
		int_display(param);
		return(1);
	}
	else if (is_float(param))
	{
		std::cout << "float" << std::endl;
		float_display(param);
		return(1);
	}
	else if (is_double(param))
	{
		double_display(param);
		return(1);
	}
	else
	{
		if (other_display(param))
			return(1);
	}
	return (2);
}

/*void	ft_char_handler(std::string const& str)
{
	if (ft_is_char(str))
	{
		if (ft_is_displayable(str[0]))
			std::cout << "char: '" << static_cast<char>(str[0]) << "'" << std::endl;
		else
			throw CharNonDisplayableException();
	}
	else
	{
		ft_check_nb_validity(str, 3);
		int	val = std::strtol(str.data(), NULL, 10);
		if (val >= 0 && val <= 127)
		{
			if (val >= 32 && val <= 126)
				std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
			else
				throw CharNonDisplayableException();
		}
		else
			throw CharImpossibleException();
	}
}

void	ft_int_handler(std::string const& str)
{
	ft_check_nb_validity(str, 0);
	int	val = std::strtol(str.data(), NULL, 10);
	if (errno == ERANGE)
		throw IntOverflowException();
	std::cout << "int: " << val << std::endl;
}

void	ft_float_handler(std::string const& str)
{
	ft_check_nb_validity(str, 1);
	float	val = std::strtof(str.data(), NULL);
	if (val > FLT_MAX || val < (-FLT_MAX - 1))
		throw FloatOverflowException();
	if (ft_check_point(str))
		std::cout << "float: " << val << "f" << std::endl;
	else
		std::cout << "float: " << val << ".0f" << std::endl;
}

void	ft_double_handler(std::string const& str)
{
	ft_check_nb_validity(str, 2);
	double	val = std::strtod(str.data(), NULL);
	if (val > DBL_MAX || val < (-DBL_MAX - 1))
		throw DoubleOverflowException();
	if (ft_check_point(str))
		std::cout << "double: " << val << std::endl;
	else
		std::cout << "double: " << val << ".0" << std::endl;*/