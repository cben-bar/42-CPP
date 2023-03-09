/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:13:59 by beni              #+#    #+#             */
/*   Updated: 2023/03/09 13:22:18 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>

class noOccurenceIsFound : public std::exception
{
    virtual const char * what() const throw();
};

const char *noOccurrenceIsFound::what() const trhow()
{
    return ("Exception: No occurrence is found.");
}

template<typename T>
void    easyfind(T container, int n)
{
    
}

#endif