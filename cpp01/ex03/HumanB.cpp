/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:05:09 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/07 12:21:02 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << name << "'s constructor called" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << this->_name << "'s destructor called" << std::endl;
	return ;
}

void	HumanB::attack() const
{
	if (!this->_weapon)
		std::cout << this->_name << " attack whitout weapoon!" << std::endl;
	else
		std::cout << this->_name << " attack with " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}