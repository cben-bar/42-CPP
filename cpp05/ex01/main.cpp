/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:06:39 by beni              #+#    #+#             */
/*   Updated: 2023/01/30 15:41:51 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  queen("Queen", 1);
    Bureaucrat  harry("Harry", 3);
    Bureaucrat  megan("Megan", 10);
    Bureaucrat  charly("Charles", 150);
    Form        buildingPermit("BuildingPermit", 5, 10);
    Form        brexit("Brexit", 1, 1);

    std::cout << WHITE << harry << std::endl;
    std::cout << WHITE << charly << std::endl;
    std::cout << buildingPermit << std::endl;
    harry.signForm(buildingPermit);
    std::cout << WHITE << buildingPermit << std::endl;
    megan.signForm(buildingPermit);
    std::cout << WHITE << megan << std::endl;
    for (int i = 0; i < 5; i++)
        megan.incGrade();
    std::cout << WHITE << megan << std::endl;
    megan.signForm(buildingPermit);
    std::cout << brexit << std::endl;
    try
    {
        brexit.beSigned(queen);
        std::cout << brexit << std::endl;
        brexit.beSigned(harry);
        std::cout << brexit << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << RED << e.what() << std::endl;
    }
    try
    {
            brexit.beSigned(charly);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    for (int i = 0; i < 149; i++)
        charly.incGrade();
    try
    {
        brexit.beSigned(charly);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << WHITE << charly << std::endl;
    return (0);
}