/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:35:46 by beni              #+#    #+#             */
/*   Updated: 2023/02/08 21:22:42 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat              peggy("Peggy", 150);
        Bureaucrat              taMereEnSlip("Mommy", 5);
        ShrubberyCreationForm   christmasParty("Christmas Party");

        christmasParty.beSigned(taMereEnSlip);
        christmasParty.beSigned(peggy);
        peggy.executeForm(christmasParty);
        christmasParty.execute(taMereEnSlip);
    }
    catch(std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat          harry("Harry", 25);
        Bureaucrat          megan("Megan", 50);
        RobotomyRequestForm robotomy("Alienator");
        RobotomyRequestForm robotomy2("Alienator2");
        megan.signForm(robotomy2);
        robotomy2.execute(megan);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl << std::endl;
    }
    
    return (0);
}