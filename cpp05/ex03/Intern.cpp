/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:45:29 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/10 18:14:51 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Intern::Intern()
{
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

AForm	*makeForm(std::string formName, std::string target)
{
	//faire un tab de nom? les comparer? et apeller la fonction de creation de form correspondantes? du coup faire trois fonctions.
	return();
}