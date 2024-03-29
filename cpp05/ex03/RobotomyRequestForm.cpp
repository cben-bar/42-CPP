/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:22:08 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/10 16:22:28 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Nobody")
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm ("RobotomyRequestForm", 72, 45), _target(target)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin): AForm("RobotomyRequestForm", 72, 45)
{
    *this = origin;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &origin)
{
    if (this == &origin)
        return (*this);
    this->_target = origin.getTarget();
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////


void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
      throw UnsignedForm();
    if (executor.getGrade() <= this->getGradeToExec())
    {
        int random = std::rand() % 100;
        std::cout << BLAND_BLUE << "Brrrr brrrrr -[Drilling noises]-" << std::endl;
        if (random % 2)
            std::cout << CYAN << executor.getName() << " has been robotomized with success." << std::endl;
        else
            std::cout << MAGENTA << "The robotomy failed on " << executor.getName() << "." << std::endl;
    }
    else
            throw GradeTooLowExecute();
}