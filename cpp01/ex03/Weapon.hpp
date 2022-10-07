/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:16:13 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/07 13:44:24 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType() const;
		void				setType(std::string newType);

	private:
		std::string _type;
};

#endif