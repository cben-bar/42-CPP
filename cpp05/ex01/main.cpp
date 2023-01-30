/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:06:39 by beni              #+#    #+#             */
/*   Updated: 2023/01/30 16:17:35 by beni             ###   ########.fr       */
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

    try
    {
        Bureaucrat  charlotte("Charlotte", 155);
    }
    catch(std::exception &e)
    {
        std::cerr << RED << e.what() << std::endl;
    }

    std::cout << WHITE << harry << std::endl << std::endl;
    std::cout << WHITE << charly << std::endl << std::endl;
    std::cout << buildingPermit << std::endl << std::endl;
    
    harry.signForm(buildingPermit);
    std::cout << std::endl << WHITE << buildingPermit << std::endl << std::endl;
    
    megan.signForm(buildingPermit);
    std::cout << WHITE << megan << std::endl;
    for (int i = 0; i < 5; i++)
        megan.incGrade();
    std::cout << WHITE << megan << std::endl;
    megan.signForm(buildingPermit);
    
    std::cout << std::endl << brexit << std::endl;
    brexit.beSigned(queen);
    std::cout << std::endl << brexit << std::endl << std::endl;
    brexit.beSigned(harry);
    std::cout << std::endl << brexit << std::endl << std::endl;
    brexit.beSigned(charly);
    for (int i = 0; i < 149; i++)
        charly.incGrade();
    brexit.beSigned(charly);
    std::cout << std::endl << WHITE << charly << std::endl << std::endl;
    megan.signForm(brexit);
    std::cout << std::endl << brexit << std::endl;

    Form    copyBrexit = brexit;
    std::cout << std::endl << copyBrexit << std::endl;

    Form    copyBrexit2(brexit);
    std::cout << std::endl << copyBrexit2 << std::endl;
    return (0);
}