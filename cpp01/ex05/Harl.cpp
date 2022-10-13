/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:33:13 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/13 17:00:03 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->_f[0] = (&Harl::_debug);
	this->_f[1] = (&Harl::_info);
	this->_f[2] = (&Harl::_warning);
	this->_f[3] = (&Harl::_error);
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::complain(std::string level)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_level[i] == level)
		{
			(void)(this->*_f[i])();
			return ;
		}
		i++;
	}
}

void	Harl::_debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::_info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;

}

void	Harl::_warning()
{
std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error()
{
std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	
}