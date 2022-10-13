/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:25:35 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/13 14:36:06 by cben-bar         ###   ########lyon.fr   */
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
		void	debug();
		void	info();
		void	warning();
		void	error();

};

#endif