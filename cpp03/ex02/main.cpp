/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:38:53 by beni              #+#    #+#             */
/*   Updated: 2023/01/10 16:09:05 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ClapTrap    noName;
    ClapTrap    whoIAm("Dory");
    ClapTrap    marin(whoIAm);
    ClapTrap    nemo = marin;
    ScavTrap    shark("Shark");
    FragTrap    whale("Willy");
    FragTrap    octopus("Hank");

    marin.setName("Marin");
    marin.attack(noName.getName());
    noName.takeDamage(5);
    for (int i = 0; i < 10; i++)
        whoIAm.attack("nemo");
    nemo.setName("Nemo");
    nemo.takeDamage(4);
    nemo.beRepaired(2);
    nemo.takeDamage(20);
    nemo.beRepaired(1);
    marin.attack("Dory");
    whoIAm.takeDamage(20);
    whoIAm.beRepaired(3);
    shark.guardGate();
    shark.attack("Marin");
    octopus.attack("Shark");
    shark.takeDamage(30);
    shark.beRepaired(15);
    octopus.highFivesGuys();
    for (int i = 0; i < 101 ; i++)
        whale.attack("Hank");
    octopus.takeDamage(100);
    octopus.beRepaired(1);
    whale.highFivesGuys();
    return (0);
}