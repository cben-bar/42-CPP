/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:08:32 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/14 16:04:07 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << BLOOD_RED << "This program takes an inverted Polish mathematical expression as argument" << std::endl;
		return 1;
	}
	RPN	calculator;
	std::string	input;

	for(int i = 1; av[i]; i++)
		input = input + av[i];
	calculator.parse(input, calculator);
	return 0;
}

