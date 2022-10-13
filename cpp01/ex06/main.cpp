/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:05:43 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/13 18:11:20 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This programm takes an argument: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (0);
	}
	else
	{
		Harl		grumpy;
		std::string	level;

		level = av[1];
		grumpy.complain(level);
	}
	return (0);
}