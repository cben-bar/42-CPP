/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:34:15 by beni              #+#    #+#             */
/*   Updated: 2023/01/07 16:04:05 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

ClapTrap::ClapTrap(): _name("Undefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" <<std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << GREY << "Constructor called with name: " << this->_name <<std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &origin)
{
    *this = origin;
    std::cout << PASTEL_GREY << "Copy constructor called" << std::endl;
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
    std::cout << DARK_GREY << "Copy assignment operator called" << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

ClapTrap::~ClapTrap()
{
    std::cout << STRIKETHROUGH << "Destructor called" << std::endl;
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

}