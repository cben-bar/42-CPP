/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:10:25 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/11 19:23:36 by cben-bar         ###   ########.fr       */
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
        Bureaucrat              diana("Diana", 100);
        Intern                  bob;
        AForm                   *form1;
        AForm                   *form2;
        AForm                   *form3;

        std::cout << std::endl;
        form1 = bob.makeForm("Presidential pardon", "Sadam");
        std::cout << std::endl;
        diana.signForm(*form1);
        std::cout << WHITE << diana << std::endl;
        std::cout << std::endl;
        queen.signForm(*form1);
        std::cout << WHITE << queen << std::endl;
        std::cout << std::endl;
        std::cout << *form1 << std::endl;
        
        std::cout << std::endl;
        form2 = bob.makeForm("Shrubbery creation", "Royal garden");
        diana.signForm(*form1);
        diana.executeForm(*form2);

        std::cout << std::endl;
        form3 = bob.makeForm("Robotomy request", "E.T");
        form3->beSigned(diana);
        form3->beSigned(queen);
        form3->execute(queen);
        std::cout << WHITE << std::endl;
        delete form1;
        delete form2;
        delete form3;
    }
    catch (std::exception &e)
    {
        std::cerr << BLOOD_RED << e.what() << WHITE << std::endl;
    }
    return (0);
}