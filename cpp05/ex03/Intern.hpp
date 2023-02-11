/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:45:45 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/11 18:47:14 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern &origin);
		Intern &operator=(const Intern &origin);
		~Intern();

	private:
		AForm		*makeForm(std::string formName, std::string formTarget);
		std::string	_form[3];
		int			getIndex(std::string formName);
		AForm		*createRobotomyForm(std::string target);
		AForm		*createShrubberyForm(std::string target);
		AForm		*createPresidentialForm(std::string target);
};

#endif