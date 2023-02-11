/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:10:25 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/11 18:48:10 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
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