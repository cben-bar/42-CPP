/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:17:28 by beni              #+#    #+#             */
/*   Updated: 2023/01/27 16:00:25 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << PASTEL_YELLOW << "\t\tTEST: GRADE TOO HIGH" << std::endl;
    try
    {
        Bureaucrat  maurice("Maurice", 0);
    }
    catch (std::exception &e)
    {
        std::cerr << MAGENTA << e.what() << std::endl; 
    }
    std::cout << std::endl;
    std::cout << PASTEL_YELLOW << "\t\tTEST: GRADE TOO LOW" << std::endl;
    try
    {
        Bureaucrat  mauricette("Mauricette", 151);
    }
    catch(const std::exception &e)
    {
        std::cerr << MAGENTA << e.what() << std::endl; 
    }
    std::cout << std::endl;

    std::cout << PASTEL_YELLOW << "\t\tTEST: INSERTION OPERATOR <<" << std::endl;
    try
    {
        Bureaucrat  alphonse("Alphonse", 5);
        alphonse.incGrade();
        std::cout << alphonse << std::endl;
        for (int i = 0; i < 4; i++)
            alphonse.incGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << MAGENTA << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << PASTEL_YELLOW << "\t\tTEST: GETTERS & LOWER GRADE" << std::endl;
    try
    {
        Bureaucrat  marius("Marius", 148);
        std::cout << WHITE << marius.getGrade() << std::endl;
        std::cout << WHITE << marius.getName() << std::endl;
        for (int i = 0; i < 3; i++)
            marius.decGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << MAGENTA << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << PASTEL_YELLOW << "\t\tTEST: OPERATOR =" << std::endl;
    try
    {
        Bureaucrat  jean("Jean", 2);
        std::cout << POOL_GREEN << jean << std::endl;
        Bureaucrat  jeanne = jean;
        std::cout << VIOLET << jeanne << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << MAGENTA << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << PASTEL_YELLOW << "\t\tTEST: COPY CONSTRUCTOR" << std::endl;
    try
    {
        Bureaucrat  sidonie("Sidonie", 2);
        Bureaucrat  paco(sidonie);
        std::cout << WHITE << sidonie << std::endl;
        std::cout << STORM_BLUE << paco << std::endl;
        paco.decGrade();
        std::cout << STORM_BLUE << paco << std::endl;
        std::cout << WHITE << sidonie << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << MAGENTA << e.what() << '\n';
    }
    
    return (0);
}
