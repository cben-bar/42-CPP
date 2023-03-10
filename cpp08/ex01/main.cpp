/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:24:07 by cben-bar          #+#    #+#             */
/*   Updated: 2023/03/10 11:35:31 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << YELLOW << "\t\tSUBJECT TEST" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << CYAN << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << POOL_GREEN << "Longest Span: " << sp.longestSpan() << std::endl << WHITE;
	std::cout << std::endl;
	
	std::cout << YELLOW << "\t\tPERSONAL TEST" << std::endl;
	Span	sp1 = Span(1);
	try
	{
		std::cout << CYAN << "Shortest Span: " << sp1.shortestSpan() << std::endl;
		std::cout << POOL_GREEN << "Longest Span: " << sp1.longestSpan() << std::endl << WHITE;
	}
	catch(std::exception &e)
	{
		std::cerr << BLOOD_RED << e.what() << std::endl;
	}
	try
	{
		std::cout << POOL_GREEN << "Longest Span: " << sp1.longestSpan() << std::endl << WHITE;
		std::cout << CYAN << "Shortest Span: " << sp1.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << BLOOD_RED << e.what() << std::endl << WHITE;
	}
	std::cout << std::endl;
	
	try
	{
		Span	sp2 = Span(3);
		sp2.addNumber();
		std::cout << PARMA << sp2 << std::endl;
		std::cout << POOL_GREEN << "Span2 Longuest Span: " << sp2.longestSpan() << std::endl;
		std::cout << CYAN << "Span2 Shortest Span: " << sp2.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << BLOOD_RED << e.what() << std::endl << WHITE;
	}
	std::cout << WHITE;
	return 0;
}