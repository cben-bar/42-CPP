/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:25:35 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/13 17:00:07 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iomanip>
#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
		void	(Harl::*_f[4])();
		std::string	_level[4];

};

#endif