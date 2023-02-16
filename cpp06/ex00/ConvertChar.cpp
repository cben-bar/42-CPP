/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:20:04 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/16 22:11:15 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertFromString.hpp"

void	convert_char(double to_convert)
{
	std::cout << CYAN << "char: " << static_cast<char>(to_convert) << std::endl;
}