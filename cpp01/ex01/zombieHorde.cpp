/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:58:11 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 16:33:19 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	if (N < 0)
		return (0);
	Zombie* newZombieHorde = new Zombie[N];
	while (i < N)
	{
		newZombieHorde[i].setName(name);
		std::cout << name << " is born" << std::endl;
		i++;
	}

	return (newZombieHorde);
}