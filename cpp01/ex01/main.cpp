/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:04:47 by cben-bar          #+#    #+#             */
/*   Updated: 2022/12/07 17:16:42 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombieH;
	int		N;
	int		i;

	N = 4;
	i = 0;
	zombieH = zombieHorde(4, "Jean-Jacques's team");

	while(i < N)
	{
		zombieH[i].announce();
		i++;
	}
	delete [] zombieH;
	return (0);
}