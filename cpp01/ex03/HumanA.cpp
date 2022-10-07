/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:15:39 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/07 12:20:33 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << name << "'s constructor called" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << this->_name << "'s destructor called" << std::endl;
	return ;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}