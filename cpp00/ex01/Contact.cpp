/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:45:19 by cben-bar          #+#    #+#             */
/*   Updated: 2022/10/06 11:45:23 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{  
    return ;
}

void        Contact::printData()const
{
    std::cout << std::endl;
    std::cout << ">>>>contacts datas<<<<" << std::endl;
    std::cout << "First name:" + this->_firstName << std::endl;
    std::cout << "Last name:" + this->_lastName << std::endl;
    std::cout << "Nick name:" + this->_nickName << std::endl;
    std::cout << "Phone number:" + this->_phoneNumber << std::endl;
    std::cout << "Darkest secret:" + this->_darkestSecret << std::endl;
}

void        checkLen(std::string data)
{
    if (data.length() > 10)
        std::cout << data.substr(0, 9) + ".";
    else
        std::cout << data;
}

void        Contact::getData(int i)const
{
    std::cout << std::endl;
    std::cout << std::setw(10);
    std::cout << i;
    std::cout << "|";
    std::cout << std::setw(10);
    checkLen(this->_firstName);
    std::cout << "|";
    std::cout << std::setw(10);
    checkLen(this->_lastName);
    std::cout << "|";
    std::cout << std::setw(10);
    checkLen(this->_nickName);
    std::cout << "|";
    std::cout << std::endl;
}

std::string setInput(std::string input)
{
    std::string s;

    std::cout << "Enter the " + input + ":";
    while (std::getline(std::cin, s))
    {
        if (!s.empty())
            return (s);
        std::cout << "Enter the " + input + ":";
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