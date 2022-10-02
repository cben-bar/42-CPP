/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:09:55 by beni              #+#    #+#             */
/*   Updated: 2022/10/02 17:59:56 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{  
    return ;
}

std::string setInput(std::string input)
{
    std::string s;

    std::cout << "Enter the " << input << ":";
    while (std::getline(std::cin, s))
    {
        if (!s.empty())
            return (s);
        std::cout << "Enter the " << input << ":";
    }
    return (s);
}

void         Contact::setData()
{
    this->_firstName = setInput("first name");
    this->_lastName = setInput("last name");
    this->_nickName = setInput("nick name");
    this->_phoneNumber = setInput("phone number");
    this->_darkestSecret = setInput("darkest secret");
}

