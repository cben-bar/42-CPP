/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:31:19 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/07 13:44:46 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << type << " is create" << std::endl;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string&	Weapon::getType() const
{
	return (this->_type);
}

void				Weapon::setType(std::string newType)
{
	this->_type = newType;	
}