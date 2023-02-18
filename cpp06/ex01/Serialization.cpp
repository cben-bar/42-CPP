/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:00:43 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/18 16:18:50 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data *ptr)
{
	//Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	// Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
	return(reinterpret_cast<Data *>(raw));
}