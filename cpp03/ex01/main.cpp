/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:38:53 by beni              #+#    #+#             */
/*   Updated: 2023/01/09 15:09:25 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{
    ClapTrap    noName;
    ClapTrap    whoIAm("Dory");
    ClapTrap    marin(whoIAm);
    ClapTrap    nemo = marin;
    ScavTrap    shark("Shark");

    marin.setName("Marin");
    marin.attack("noName");
    for (int i = 0; i < 10; i++)
        whoIAm.attack("nemo");
    nemo.setName("Nemo");
    nemo.takeDamage(4);
    nemo.beRepaired(2);
    nemo.takeDamage(20);
    nemo.beRepaired(1);
    marin.setName("Marin");
    marin.attack("whoIAm");
    whoIAm.takeDamage(20);
    whoIAm.beRepaired(3);
    shark.guardGate();
    for (int i = 0; i < 49 ; i++)
        shark.attack("Marin");
    shark.beRepaired(30);
    return (0);
}