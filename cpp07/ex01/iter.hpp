/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:27:47 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/06 16:57:49 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

///////////////////////////////////////
//*/ */ */ */    COLORS   /* /* /* /*//
///////////////////////////////////////

#define WHITE           "\x1B[37m"
#define GREY            "\x1B[30m"

#define BLAND_BLUE       "\x1b[38;5;4m"
#define STORM_BLUE     "\x1b[38;5;12m"
#define CYAN            "\x1B[36m"

#define GREEN           "\x1B[32m"
#define SEA_GREEN       "\x1b[38;5;6m"
#define PASTEL_GREEN    "\x1b[38;5;159m"
#define FLUO_GREEN      "\x1b[38;5;46m"
#define POOL_GREEN      "\x1b[38;5;50m"

#define RED             "\x1B[31m"
#define BLOOD_RED       "\x1b[38;5;125m"

#define YELLOW          "\x1B[33m"
#define PASTEL_YELLOW   "\x1b[38;5;229m"
#define SUN             "\x1b[38;5;222m"
#define TAN             "\x1b[38;5;172m"

#define MAGENTA         "\x1b[35m"
#define PASTEL_PINK     "\x1b[38;5;213m"
#define PASTEL_PURPLE   "\x1b[38;5;147m"
#define PARMA           "\x1b[38;5;105m"
#define PURPLE          "\x1b[38;5;140m"
#define VIOLET          "\x1b[38;5;129m"
#define POWDERY_PINK    "\x1b[38;5;225m"

///////////////////////////////////////
//*/ */ */ */   TEMPLATE  /* /* /* /*//
///////////////////////////////////////

template<typename T>
void	print(T data)
{
	std::cout << data << " . ";
}

template<typename T>
void	add(T data)
{
	T added = data + ".added";
	std::cout << data << " . ";
} 

template<typename T>
void	iter(T *addTab, int sizeTab, void f(const T &))
{
	for (int i = 0; i < sizeTab; i++)
		f(addTab[i]);
}

template<typename T>
void	iter(T *addTab, int sizeTab, void f(T &))
{
	for (int i = 0; i < sizeTab; i++)
		f(addTab[i]);
}

#endif