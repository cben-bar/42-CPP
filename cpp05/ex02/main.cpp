/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:35:46 by beni              #+#    #+#             */
/*   Updated: 2023/02/04 22:45:11 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat              peggy("Peggy", 150);
        Bureaucrat              taMereEnSlip("Mommy", 5);
        ShrubberyCreationForm   christmasParty("Christmas Party");

        christmasParty.beSigned(peggy);
        peggy.executeForm(christmasParty);
        christmasParty.beSigned(taMereEnSlip);
        christmasParty.execute(taMereEnSlip);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}