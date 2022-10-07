/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:58:02 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/07 15:13:25 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "This programm takes a filename, and 2 strings" << std::endl;
		return (0);
	}
	else
	{
		std::cout << "av[0] = " << av[0] << std::endl;
		std::cout << "av[1] = " << av[1] << std::endl;
		std::cout << "av[2] = " << av[2] << std::endl;
		std::cout << "av[3] = " << av[3] << std::endl;
		
	}
	return (0);
}