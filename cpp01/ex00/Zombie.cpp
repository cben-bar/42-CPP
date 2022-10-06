/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:45:08 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 13:54:06 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie " << this->_name << " is born" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " died" << std::endl;
    return ;
}

void Zombie::announce()
{
    std::cout << this->_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}