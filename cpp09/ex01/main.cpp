/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:08:32 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/14 12:04:39 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << BLOOD_RED << "This program takes an inverted Polish mathematical expression as an argument" << std::endl;
		return 0;
	}
	RPN	calculator(av[1]);

}