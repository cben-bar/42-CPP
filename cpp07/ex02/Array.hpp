/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:59:16 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/07 18:18:33 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
		Array();//cree un array vide
		Array(unsigned int n);//cree un array de n element initialise par defaut
		Array(const Array &origin);
		Array &operator=(const Array &origin);
		~Array();

		unsigned int size() const;

		class indexOut : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		unsigned int	_size;
		T				_cel;
};

#endif