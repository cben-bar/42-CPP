/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:24:23 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/08 14:50:46 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

template<typename T>
Array<T>::Array(): _size(0), _cel(NULL)
{
	return;
}

template<typename T>
Array<T>::Array(unsigned int n): _size(n), _cel(new T[n])
{
	return;
}

template<typename T>
Array<T>::Array(const Array &origin): _size(origin._size), _cel(new T[origin._size])
{
	for (unsigned int n; n < origin._size; n++)
		_cel[n] = origin._cel[n];
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Array<T> &Array<T>::operator=(const Array &origin)
{
	if (this == &origin)
		return (*this);
	
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Array<T>::~Array()
{
	return;
}