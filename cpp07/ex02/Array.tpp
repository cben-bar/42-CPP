/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:59:16 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/09 19:22:33 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

template<typename T>
Array<T>::Array(): _size(0), _cel(NULL)
{
	std::cout << FLUO_GREEN << "An empty array has just been created." << std::endl;
	return;
}

template<typename T>
Array<T>::Array(unsigned int n): _size(n), _cel(new T[n])
{
	std::cout << SEA_GREEN << "An array of " << _size << " elements initialized by default has just been created." << std::endl;
	return;
}

template<typename T>
Array<T>::Array(const Array &origin): _size(origin._size), _cel(new T[origin._size])
{
	for (unsigned int n = 0; n < origin._size; n++)
		_cel[n] = origin._cel[n];
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

template<typename T>
Array<T> &Array<T>::operator=(const Array &origin)
{
	if (this == &origin)
		return (*this);
	delete _cel;
	for (unsigned int n = 0; n < origin._size; n++)
		_cel[n] = origin._cel[n];
	this->_size = origin._size;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw indexOut();
	return (_cel[i]);
}

template<typename T>
T const &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw indexOut();
	return (_cel[i]);
} 
///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

template<typename T>
Array<T>::~Array()
{
	delete[] this->_cel;
	return;
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

///////////////////////////////////////
//*/ */ */ */ EXCEPTIONS  /* /* /* /*//
///////////////////////////////////////

template<typename T>
const char *Array<T>::indexOut::what() const throw()
{
	return ("EXCEPTION: Index is out of bounds.");
}