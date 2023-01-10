/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:34:13 by beni              #+#    #+#             */
/*   Updated: 2023/01/10 15:31:51 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

ScavTrap::ScavTrap()
{
    this->setName("Undefined");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << SUN << "ScavTrap default constructor called for " << this->_name << "." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name)
{
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << PASTEL_ORANGE << "ScavTrap default constructor called for " << this->_name << "." << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &origin)
{
    *this = origin;
    std::cout << PASTEL_YELLOW << "ScavTrap copy constructor called with name: "<< this->_name << "." << std::endl;
    return;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

ScavTrap &ScavTrap::operator=(const ScavTrap &origin)
{
    this->_name = origin.getName();
    this->_hitPoints = origin.getHitPoint();
    this->_energyPoints = origin.getEnergyPoint();
    this->_attackDamage = origin.getAttackDamage();
    std::cout << TAN << "ScavTrap copy assignment operator called with name: " << this->_name << "." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

ScavTrap::~ScavTrap()
{
    std::cout << PARMA << "ScavTrap destructor called for " << this->_name << "." << std::endl;
    return;
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void    ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << PASTEL_PURPLE << "ScavTrap " << this->_name << " can't attack, " << this->_name << " doesn't have enough hit point." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << PASTEL_ORANGE << "ScavTrap " << this->_name << " can't attack, " << this->_name << " doesn't have enough energy point." << std::endl;
    else
    {
        std::cout << PASTEL_PINK << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }  
}

void    ScavTrap::guardGate()
{
    if (this->_hitPoints <= 0)
        std::cout << PASTEL_PURPLE << "ScavTrap " << this->_name << "  doesn't have enough hit point to get into Gate keeper mode." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << PASTEL_ORANGE << "ScavTrap " << this->_name << " doesn't have enough energy point to get into Gate keeper mode." << std::endl;
    else
        std::cout << RED << "ScavTrap " << this->_name <<  " is now in Gate keeper mode."<< std::endl;
}