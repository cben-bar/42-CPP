/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:46:19 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 11:46:21 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    return ;
}

Phonebook::~Phonebook()
{
    return ;
}

void    Phonebook::setContact(int i)
{
    this->_contact[i].setData();
}

void    Phonebook::getContact(int i) const
{
    this->_contact[i].getData(i);
}

void    Phonebook::getDetContact(int i) const
{
    this->_contact[i].printData();
}