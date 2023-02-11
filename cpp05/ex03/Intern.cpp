/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:45:29 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/11 19:18:56 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Intern::Intern()
{
	_form[0] = "Robotomy request";
	_form[1] = "Shrubbery creation";
	_form[2] = "Presidential pardon";
	return;
}

Intern::Intern(const Intern &origin)
{
	*this = origin;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Intern	&Intern::operator=(const Intern &origin)
{
	(void)origin;
	return (*this);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Intern::~Intern()
{
    return;
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	int i = this->getIndex(formName);
	switch(i)
	{
		case 0:
			std::cout << PASTEL_YELLOW << "Intern create " << formName << " form." << std::endl;
			return (createRobotomyForm(target));
		case 1:
			std::cout << PASTEL_YELLOW << "Intern create " << formName << " form." << std::endl;
			return (createRobotomyForm(target));
		case 2:
			std::cout << PASTEL_YELLOW << "Intern create " << formName << " form." << std::endl;
			return (createRobotomyForm(target));
		default:
			std::cout << BLOOD_RED << "Error: " << formName << " does not exist." << std::endl;
	}
	return (NULL);
}

int		Intern::getIndex(std::string formName)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_form[i] == formName)
			return (i);
	}
	return (-1);
}

AForm	*Intern::createRobotomyForm(std::string target)
{
	return new RobotomyRequestForm(target);
}


AForm		*createShrubberyForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}


AForm		*createPresidentialForm(std::string target)
{
	return new PresidentialPardonForm(target);
}
