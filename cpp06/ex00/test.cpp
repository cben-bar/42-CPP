/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:44:44 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/15 19:03:44 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <cfloat>
#include <ostream>
#include <iostream>

#define WHITE           "\x1B[37m"
#define POOL_GREEN      "\x1b[38;5;50m"
#define CYAN            "\x1B[36m"
#define PARMA           "\x1b[38;5;105m"
#define MAGENTA         "\x1b[35m"
#define POWDERY_PINK    "\x1b[38;5;225m"

int main()
{
	std::cout << CYAN << "\t\tINT" << std::endl;
	std::cout << "Limit max int = " << INT_MAX << std::endl << std::endl;
	std::cout << "Limit min int = " << INT_MIN << std::endl << std::endl;


	std::cout << PARMA << "\t\tFLOAT" << std::endl;
	std::cout << "Limit max float = " << FLT_MAX << std::endl;
	std::cout << "Limit min float = " << FLT_MIN << std::endl << std::endl;
	
	std::cout << POOL_GREEN << "\t\tDOUBLE" << std::endl;
	std::cout << "Limit max double = " << DBL_MAX << std::endl;
	std::cout << "Limit min double = " << DBL_MIN << std::endl << std::endl << WHITE;

	std::cout << POWDERY_PINK << "OTHERS THINGS" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	return (0);
}