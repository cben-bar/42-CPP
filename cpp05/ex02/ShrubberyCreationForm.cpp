/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:51:16 by beni              #+#    #+#             */
/*   Updated: 2023/02/04 17:27:09 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm()
{
//  std::cout << PARMA << "ShrubberyCreationForm default constructor called." << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
//  std::cout << PASTEL_PINK << "ShrubberyCreationForm constructor called with target." << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin): AForm("ShrubberyCreationForm", 145, 137)
{
    *this = origin;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin)
{
    if (this == &origin)
        return (*this);
    this->_target = origin.getTarget();
//  std::cout << PASTEL_PURPLE << "Form copy assignment operator called." << std::endl;
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

ShrubberyCreationForm::~ShrubberyCreationForm()
{
//  std::cout << PARMA << "ShrubberyCreationForm destructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeToExec())
    {
        std::cout << POOL_GREEN << executor.getName() << " draw:" << std::endl;
        std::ofstream file(this->_target + "_shrubbery");
        std::string line;
        
        line.append("               ,@@@@@@@,");
        line.append("       ,,,.   ,@@@@@@/@@,  .oo8888o.");
        line.append("    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o");
        line.append("   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'");
        line.append("   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'");
        line.append("   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'");
        line.append("   `&%\ ` /%&'    |.|        \ '|8'");
        line.append("       |o|        | |         | |");
        line.append("       |.|        | |         | |");
        line.append("    \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_");
    }
    else
        throw GradeTooLowExecute();
}