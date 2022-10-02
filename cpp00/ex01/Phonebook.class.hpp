/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:14:33 by beni              #+#    #+#             */
/*   Updated: 2022/10/02 18:23:13 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"

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