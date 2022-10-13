/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:32:04 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/13 14:48:37 by cben-bar         ###   ########lyon.fr   */
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
		std::cout << "av[0] =" << av[0] << std::endl;
		std::cout << "av[1] =" << av[1] << std::endl;
	}
	return (0);
}