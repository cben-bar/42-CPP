/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:10:10 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/10 16:34:03 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("Nobody")
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin): AForm("PresidentialPardonForm", 25, 5)
{
    *this = origin;
}
///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &origin)
{
    if (this == &origin)
        return (*this);
    this->_target = origin.getTarget();
    return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////


void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigned())
      throw UnsignedForm();
    if (executor.getGrade() <= this->getGradeToExec())
    {
        std::cout << PASTEL_PINK << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw GradeTooLowExecute();
}