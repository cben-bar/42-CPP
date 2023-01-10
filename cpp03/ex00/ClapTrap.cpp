/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:34:15 by beni              #+#    #+#             */
/*   Updated: 2023/01/10 15:14:27 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

ClapTrap::ClapTrap(): _name("Undefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called for " << this->_name << "." << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << GREY << "Constructor called with name: " << this->_name << "." << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &origin)
{
    *this = origin;
    std::cout << STORM_BLUE << "Copy constructor called with name: " << this->_name << "." << std::endl;
    return;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

ClapTrap &ClapTrap::operator=(const ClapTrap &origin)
{
    this->_name = origin.getName();
    this->_hitPoints = origin.getHitPoint();
    this->_energyPoints = origin.getEnergyPoint();
    this->_attackDamage = origin.getAttackDamage();
    std::cout << DARK_BLUE << "Copy assignment operator called with name: " << this->_name << "." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

ClapTrap::~ClapTrap()
{
    std::cout << OCEAN_BLUE << "Destructor called for " << this->_name << "." << std::endl;
    return;
}

///////////////////////////////////////
//*/ */ */ */   GETTERS   /* /* /* /*//
///////////////////////////////////////

std::string ClapTrap::getName() const
{
    return (this->_name);
}

int         ClapTrap::getHitPoint() const
{
    return (this->_hitPoints);
}

int         ClapTrap::getEnergyPoint() const
{
    return (this->_energyPoints);
}

int         ClapTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << PASTEL_PURPLE << "ClapTrap " << this->_name << " can't attack, " << this->_name << " doesn't have enough hit point." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << PASTEL_ORANGE << "ClapTrap " << this->_name << " can't attack, " << this->_name << " doesn't have enough energy point." << std::endl;
    else
    {
        std::cout << PASTEL_PINK << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }       
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << BLOOD_RED << "ClapTrap " << this->_name << " is already dead.." << std::endl;
    else
    {
        std::cout << SEA_GREEN << "ClapTrap " << this->_name << " with " << this->_hitPoints << " hit point(s), take " << amount << " damage point(s)." << std::endl;
        this->_hitPoints -= amount;
        if (this->_hitPoints < 0)
            this->_hitPoints = 0;
        if (this->_hitPoints == 0)
            std::cout << BLOOD_RED << "ClapTrap " << this->_name << " is dead!" << std::endl;
        else
            std::cout << SEA_GREEN << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit point(s) left." << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << CYAN << "ClapTrap " << this->_name << " can't be repaired, " << this->_name << " is dead.." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << BLUE << "ClapTrap " << this->_name << " can't be repaired, " << this->_name << " doesn't have enough energy.." << std::endl;
    else
    {
        if (this->_hitPoints > 10)
            this->_hitPoints = 10;
        std::cout << PASTEL_GREEN  << "ClapTrap " << this->_name << " had " << this->_hitPoints << " hit point(s). But that was before.."<< std::endl;
        this->_hitPoints += amount;
        if (this->_hitPoints > 10)
            this->_hitPoints = 10;
        std::cout << GREEN << "ClapTrap "<< this->_name << " has been repaired and now has " << this->_hitPoints << " hit points."<< std::endl;
        this->_energyPoints--;
    }
}