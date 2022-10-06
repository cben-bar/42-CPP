/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:16:00 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 19:03:06 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"ls


class HumanB
{
	public:
		HumanB::HumanB(std::string name);
		HumanB::~HumanB();
		void	attack() const;

	private:
		std::string	_name;
		Weapon		*_weapon;

};


#endif