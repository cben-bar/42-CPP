/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:12:10 by beni              #+#    #+#             */
/*   Updated: 2022/10/03 12:30:38 by beni             ###   ########.fr       */
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