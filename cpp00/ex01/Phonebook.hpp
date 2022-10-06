/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:46:33 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 11:46:35 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();
        void    setContact(int i);
        void    getContact(int i) const;
        void    getDetContact(int i) const;
    
    private:
        Contact _contact[8];
};

#endif