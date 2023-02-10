/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:10:25 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/10 16:59:50 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat              charlotte("Charlotte", 150);
        Bureaucrat              taMereEnSlip("Mommy", 5);
        ShrubberyCreationForm   christmasParty("Christmas Party");

        christmasParty.beSigned(taMereEnSlip);
        christmasParty.beSigned(charlotte);
        charlotte.executeForm(christmasParty);
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
        robotomy2.execute(harry);
        harry.executeForm(robotomy2);
        robotomy2.execute(megan);
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << e.what() << std::endl << WHITE << std::endl;
    }
    try
    {
        Bureaucrat              queen("Quenn", 1);
        Bureaucrat              george("George", 140);
        Bureaucrat              diana("Diana", 100);
        Bureaucrat              camilia("Camilia", 100);
        PresidentialPardonForm  iHaveKenPamela("PamyGate");
        std::cout << camilia << std::endl;
        diana.signForm(iHaveKenPamela);
        queen.signForm(iHaveKenPamela);
        camilia.executeForm(iHaveKenPamela);
        queen.executeForm(iHaveKenPamela);
        for(int i = 0; i < 5; i++)
            queen.decGrade();
        queen.executeForm(iHaveKenPamela);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << WHITE << std::endl;
    }
    return (0);
}