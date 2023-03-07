/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:00:43 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/07 15:24:41 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data *ptr)
{
	//It takes a pointer and converts it to the unsigned integer type uintptr_t
	//Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	//It takes an unsigned integer parameter and converts it to a pointer to Data
	// Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
	return(reinterpret_cast<Data *>(raw));
}