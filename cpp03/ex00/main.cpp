/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:08:54 by beni              #+#    #+#             */
/*   Updated: 2023/01/08 15:49:52 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    whoIAm;
    ClapTrap    marin("Marin");
    ClapTrap    anemone("Anemone");
    ClapTrap    nemo(marin);
    ClapTrap    Dory = anemone;
    
    // std::cout << std::endl;
    // whoIAm.attack("marin");
    // std::cout << std::endl;
    // marin.takeDamage(3);
    // std::cout << std::endl;
    // marin.beRepaired(1);
    std::cout << std::endl;
    marin.attack("nemo");//
    std::cout << std::endl;
    nemo.attack("marin");//
    // std::cout << std::endl;
    // nemo.beRepaired(100);
    // std::cout << std::endl;
    // nemo.attack("Dory");
    
    return (0);
}
