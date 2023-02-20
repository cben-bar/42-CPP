/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:03:38 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/20 19:25:58 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int	x = 1;
	int y = 10;
	std::cout << YELLOW << "\t\tT INT TEST" << std::endl;
	std::cout << PASTEL_GREEN << "\t\tx: " << x << std::endl;
	std::cout << PASTEL_YELLOW << "\t\ty: " << y << std::endl;
	std::cout << VIOLET << std::endl << "MAX TEST :" << std::endl << max(x, y) << std::endl;
	std::cout << POWDERY_PINK << std::endl << "MIN_TEST :" << std::endl << min(x, y) << std::endl;
	std::cout << MAGENTA << std::endl << "SWAP_TEST : " << std::endl;
	swap(x, y);
	std::cout << PASTEL_GREEN <<"x: " << x << std::endl;
	std::cout << PASTEL_YELLOW <<"y: " << y << std::endl;

	float	fc = 1.01f;
	float	fk = 147.19f;
	std::cout << YELLOW << "\t\tT FLOAT TEST" << std::endl;
	std::cout << PASTEL_GREEN << "\t\tfc: " << fc << std::endl;
	std::cout << PASTEL_YELLOW << "\t\tfk: " << fk << std::endl;
	std::cout << VIOLET << std::endl << "MAX TEST :" << std::endl << max(fc, fk) << std::endl;
	std::cout << POWDERY_PINK << std::endl << "MIN_TEST :" << std::endl << min(fc, fk) << std::endl;
	std::cout << MAGENTA << std::endl << "SWAP_TEST : " << std::endl;
	swap(fc, fk);
	std::cout << PASTEL_GREEN <<"fc: " << fc << std::endl;
	std::cout << PASTEL_YELLOW <<"fk: " << fk << std::endl;

	std::cout << YELLOW << "\t\tSUBJECT TEST" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << WHITE;
	return (0);
}