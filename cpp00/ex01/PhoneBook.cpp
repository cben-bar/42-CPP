/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:38:04 by cben-bar          #+#    #+#             */
/*   Updated: 2022/09/29 17:44:36 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
        return;
}

PhoneBook::~PhoneBook(void) 
{
        return;
}

void    PhoneBook::setContact(int indexContact)
{
        this->contact[indexContact].setInfo();
}

void    PhoneBook::getContact(int indexContact)
{
        this->contact[indexContact].getInfo(indexContact);
}

void    PhoneBook::getOneContact(int indexContact)
{
        this->contact[indexContact].displayInfo();
}% 