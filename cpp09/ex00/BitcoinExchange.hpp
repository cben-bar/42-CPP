/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:08:04 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/06 16:55:26 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

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
//*/ */ */ */   DEFINE   /* /* /* /*//
///////////////////////////////////////

#define FALSE 0
#define TRUE 1

///////////////////////////////////////
//*/ */ */ */   BOOLEANS  /* /* /* /*//
///////////////////////////////////////

bool	isValidValue(float value);


///////////////////////////////////////
//*/ */ */ */    DEBUG    /* /* /* /*//
///////////////////////////////////////

void	displayMap(std::map<std::string, float> dataMap);


#endif