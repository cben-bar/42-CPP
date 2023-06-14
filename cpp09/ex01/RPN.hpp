/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:09:12 by cben-bar          #+#    #+#             */
/*   Updated: 2023/06/14 16:02:20 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <cstdlib>
#include <iostream>
#include <string>

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

class RPN
{
	public:
		RPN();
		RPN(const RPN &origin);

		RPN &operator=(const RPN &origin);

		~RPN();

	///////////////////////////////////////
	//*/ */ */ */   GETTERS   /* /* /* /*//
	///////////////////////////////////////

	std::stack<int>	getStack() const;
	int				getRes() const;

	///////////////////////////////////////
	//*/ */ */ */   BOOLEANS  /* /* /* /*//
	///////////////////////////////////////

	bool	isEmptyStack(std::stack<int>) const;
	void	parse(std::string input, RPN calculator);

	///////////////////////////////////////
	//*/ */ */ */  FUNCTIONS  /* /* /* /*//
	///////////////////////////////////////


	private:
		std::stack<int> _stack;
		int				_res;




	///////////////////////////////////////
	//*/ */ */ */   METHODS   /* /* /* /*//
	///////////////////////////////////////

	void	run(std::string input, RPN calculator);
	void	cleanStack(std::stack<int>lifo);
	bool	reverseCalcul(char token, std::stack<int> lifo);

	void	printStack(std::stack<int>& lifo);
};





#endif