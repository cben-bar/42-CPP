/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:16:00 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/07 11:58:04 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"


class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &Weapon);

	private:
		std::string	_name;
		Weapon		*_weapon;

};


#endif