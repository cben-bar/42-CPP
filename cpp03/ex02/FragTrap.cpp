/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:37:09 by beni              #+#    #+#             */
/*   Updated: 2023/01/17 16:17:05 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

FragTrap::FragTrap()
{
    this->setName("Undefined");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << FLOWER_GREEN << "FragTrap default constructor called for " << this->_name << "." << std::endl;
    return;
}

FragTrap::FragTrap(std::string name)
{
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << FLUO_GREEN << "FragTrap default constructor called for " << this->_name << "." << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap &origin)
{
    *this = origin;
    std::cout << POOL_GREEN << "FragTrap copy constructor called with name: "<< this->_name << "." << std::endl;
    return;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

FragTrap &FragTrap::operator=(const FragTrap &origin)
{
    if (this == &origin)
        return (*this);
    this->_name = origin.getName();
    this->_hitPoints = origin.getHitPoint();
    this->_energyPoints = origin.getEnergyPoint();
    this->_attackDamage = origin.getAttackDamage();
    std::cout << PINE_GREEN << "FragTrap copy assignment operator called with name: " << this->_name << "." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

FragTrap::~FragTrap()
{
    std::cout << PARMA << "FragTrap destructor called for " << this->_name << "." << std::endl;
    return;
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void    FragTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << PURPLE << "FragTrap " << this->_name << " can't attack, " << this->_name << " doesn't have enough hit point." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << VIOLET << "FragTrap " << this->_name << " can't attack, " << this->_name << " doesn't have enough energy point." << std::endl;
    else
    {
        std::cout << POWDERY_PINK << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }  
}

void    FragTrap::highFivesGuys(void)
{
    if (this->_hitPoints <= 0)
        std::cout << PURPLE << "FragTrap " << this->_name << " doesn't have enough hit point to ask high fives." << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << VIOLET << "FragTrap " << this->_name << " doesn't have enough energy point to ask high fives." << std::endl;
    else
        std::cout << POWDERY_PINK << this-> _name << ": High Fives?" << std::endl;
}