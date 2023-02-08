/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:19:40 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/08 19:27:38 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm()
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
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
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

ShrubberyCreationForm::~ShrubberyCreationForm()
{
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
    if (!getSigned())
        throw UnsignedForm();
    if (executor.getGrade() <= this->getGradeToExec())
    {
        std::string name = this->_target + "_shrubbery";
        std::cout << POOL_GREEN << executor.getName() << " draw a three in file " << name << "." << std::endl;
        std::ofstream file(name.c_str());
        std::string line;

        line.append("    .     .       .     .    +     .      .      .     .\n");
        line.append("     .       .        .      #     .       .        .      \n");
        line.append("        .         .         ###         .         .      .\n");
        line.append("      .      .    ''#:. .:##'''##:. .:#''    .      .\n");
        line.append(".         .       . ''####''###''####''  .        .       .\n");
        line.append("       .      ''#:.    .:#''###''#:.    .:#''  .       .\n");
        line.append("  .              ''#########'''#########''        .        .\n");
        line.append("        .    ''#:.  ''####''###''####''  .:#''   .       .\n");
        line.append("     .     . ''#######''''##'''##''''#######''  .      .\n");
        line.append("  .           .   ''##''#####'#####''##''   .       .      .\n");
        line.append("    .    ''#:. ...  .:##''###'###''##:.  ... .:#''     .\n");
        line.append("            ''#######''##''#####''##''#######''      .     .\n");
        line.append("    .    .     ''#####''''#######''''#####''    .      .\n");
        line.append("             .      ''      000      ''    .      .       .\n");
        line.append("       .         .    .     000     .        .       .\n");
        line.append(".. .. .....................O000O.................... .. ..\n");
        file << line << std::endl;
        file.close();
    }
    else
        throw GradeTooLowExecute();
}