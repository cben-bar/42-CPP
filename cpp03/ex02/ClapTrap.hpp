/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:34:13 by beni              #+#    #+#             */
/*   Updated: 2023/01/09 13:06:10 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define STRIKETHROUGH   "\x1B[9m"
#define GREY            "\x1B[30m"
#define DARK_BLUE       "\x1b[38;5;4m"
#define OCEAN_BLUE      "\x1b[38;5;19m"
#define PARMA           "\x1b[38;5;105m"
#define BLUE            "\x1B[34m"
#define STORM_BLUE     "\x1b[38;5;12m"
#define CYAN            "\x1B[36m"
#define GREEN           "\x1B[32m"
#define SOFT_GREEN      "\x1b[38;5;6m"
#define SEA_GREEN       "\x1b[38;5;6m"
#define PASTEL_GREEN    "\x1b[38;5;159m"
#define RED             "\x1B[31m"
#define BLOOD_RED       "\x1b[38;5;125m"
#define YELLOW          "\x1B[33m"
#define PASTEL_YELLOW   "\x1b[38;5;229m"
#define MAGENTA         "\x1b[35m"
#define PASTEL_PINK     "\x1b[38;5;213m"
#define PASTEL_PURPLE   "\x1b[38;5;147m"
#define PASTEL_ORANGE   "\x1b[38;5;224m"
#define SUN             "\x1b[38;5;222m"
#define TAN             "\x1b[38;5;172m"

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &origin);
        ClapTrap &operator=(const ClapTrap &origin);
        ~ClapTrap();

        std::string getName() const;
        int         getHitPoint() const;
        int         getEnergyPoint() const;
        int         getAttackDamage() const;

        void       	setName(std::string name);
        void        setHitPoints(int hitPoints);
        void        setEnergyPoints(int energyPoints);
        void        setAttackDamage(int attackDamage);

        virtual void    attack(const std::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

    protected:

        std::string     _name;
        int             _hitPoints;
        int             _energyPoints;
        int             _attackDamage;
};

#endif
