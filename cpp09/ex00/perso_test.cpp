/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perso_test.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:06:58 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/06 19:12:02 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

# define FALSE 0
# define TRUE 1


bool	isValidValue(float value)
{
	if (value < 0 || value > 1000)
		return (FALSE);
	return (TRUE);
}

int main()
{
	std::cout << "test precision float" << std::endl;
    int z = 0;
    if (isValidValue(z))
        std::cout << "valid for " << z << std::endl;
    else
        std::cout << "invalid value for " << z << std::endl;
    
    
    z = 1000;
    if (isValidValue(z))
        std::cout << "valid for " << z << std::endl;
    else
        std::cout << "invalid value for " << z << std::endl;
    
    
    z = -0;
    if (isValidValue(z))
        std::cout << "valid for " << z << std::endl;    
    else
        std::cout << "invalid value for " << z << std::endl;    
    
    z = -42;
    if (isValidValue(z))
        std::cout << "valid for " << z << std::endl;    
    else
        std::cout << "invalid value for " << z << std::endl;   
    
    z = 42;
    if (isValidValue(z))
        std::cout << "valid for " << z << std::endl;
    else
        std::cout << "invalid value for " << z << std::endl;
    
    float y = 0.57;
    if (isValidValue(y))
        std::cout << "valid for " << y << std::endl;    
    else
        std::cout << "invalid value for " << y << std::endl;    
    
    y = 0.01;
    if (isValidValue(y))
        std::cout << "valid for " << y << std::endl;    
    else
        std::cout << "invalid value for " << y << std::endl;
    
    y = 999.999;
    if (isValidValue(y))
        std::cout << "valid for " << y << std::endl;
    else
        std::cout << "invalid value for " << y << std::endl;
}