/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:58:02 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/11 17:46:29 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

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

		std::ofstream	ofs("test.out");
		std::ifstream	ifs(av[1]);
		std::string		s1;
		std::string		s2;

		s1 = av[2];
		s2 = av[3];

		if (s1.compare(av[1]) == 0)
		{
			std::cout << s1 << " " << s2 << std::endl;
		}
		ofs << av[2] << std::endl;
		ofs.close();
	}
	return (0);
}