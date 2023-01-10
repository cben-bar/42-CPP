/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:08:54 by beni              #+#    #+#             */
/*   Updated: 2023/01/10 15:47:18 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    noName;
    ClapTrap    whoIAm("dory");
    ClapTrap    marin(whoIAm);
    ClapTrap    nemo = marin;

    marin.attack("noName");
    for (int i = 0; i < 10; i++)
        whoIAm.attack("nemo");
    nemo.takeDamage(4);
    nemo.beRepaired(2);
    nemo.takeDamage(20);
    nemo.beRepaired(1);
    marin.attack("Dory");
    whoIAm.takeDamage(20);
    whoIAm.beRepaired(3);

    return (0);
}
