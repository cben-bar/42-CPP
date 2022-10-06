/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:58:41 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 18:22:34 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	setName(std::string name);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif