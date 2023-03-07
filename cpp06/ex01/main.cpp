/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:03:10 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/07 15:29:05 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data		data;
	uintptr_t	ser;
	Data		*des;
	data.a = 0;
	data.b = 10;

	std::cout << PASTEL_GREEN << "\tDATA MEMORY ADDRESS: " << std::endl << std::endl;
	std::cout << POOL_GREEN << "====> memory address: " << &data << std::endl << std::endl;

	std::cout << MAGENTA << "\tVALUES: " << std::endl << std::endl;
	std::cout << PASTEL_PINK << "Value of data.a: " << data.a << std::endl;
	std::cout << PASTEL_PINK << "Value of data.b: " << data.b << std::endl << std::endl;

	ser = serialize(&data);
	std::cout << PASTEL_GREEN << "\tNEW SER MEMORY ADDRESS: " << std::endl << std::endl;
	std::cout << POOL_GREEN << "====> memory address: " << &ser << std::endl << std::endl;

	des = deserialize(ser);
	std::cout << PASTEL_GREEN << "\tNEW DES MEMORY ADDRESS: " << std::endl << std::endl;
	std::cout << POOL_GREEN << "====> memory address: " << des << std::endl << std::endl;
	std::cout << POOL_GREEN << "Value of des->a: " << des->a << std::endl;
	std::cout << POOL_GREEN << "Value of des->b: " << des->b << std::endl;

	std::cout << WHITE;
	return (0);
}