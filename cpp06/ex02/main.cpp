/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:03:10 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/20 16:08:01 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand (time(NULL));
	int	random = std::rand() % 3;
	std::cout << PURPLE << "\t    RANDOM INSTANTIATION" << std::endl;
	switch (random)
	{
		case 1:
		{
			std::cout << POOL_GREEN << "Generate: A. --OK--" << std::endl;
			return (new(A));
		}
		case 2:
		{
			std::cout << PASTEL_YELLOW << "Generate: B. --OK--" << std::endl;
			return (new(B));
		}
		default:
		{
			std::cout << MAGENTA << "Generate: C. --OK--" << std::endl;
			return (new(C));
		}
	}
	return (NULL);
}

void identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	std::cout << PURPLE << std::endl << "\t\tIDENTIFY PTR" << std::endl;
	if (a)
		std::cout << POOL_GREEN << "Actual type of the object pointed to by p: A" << std::endl;
	else if (b)
		std::cout << PASTEL_YELLOW << "Actual type of the object pointed to by p: B" << std::endl;
	else if (c)
		std::cout << MAGENTA << "Actual type of the object pointed to by p: C" << std::endl;
}

void identify(Base& p)
{
	std::cout << PURPLE << std::endl << "\t\t IDENTIFY &" << std::endl;
	try
	{
		A	&rA = dynamic_cast<A&>(p);
		std::cout << POOL_GREEN << "Actual type of the object pointed to by p: A" << std::endl << std::endl;
		(void)rA;
		return;
	}
	catch(const std::exception &e)
	{}

	try
	{
		B	&rB = dynamic_cast<B&>(p);
		std::cout << PASTEL_YELLOW << "Actual type of the object pointed to by p: B" << std::endl << std::endl;
		(void)rB;
		return;
	}
	catch(const std::exception &e)
	{}

	try
	{
		C	&rC = dynamic_cast<C&>(p);
		std::cout << MAGENTA << "Actual type of the object pointed to by p: C" << std::endl << std::endl;
		(void)rC;
		return;
	}
	catch(const std::exception &e)
	{}
}

int main()
{
	Base	*randomBase = generate();

	identify(randomBase);
	identify(*randomBase);
	delete randomBase;
	std::cout << WHITE;
	return (0);
}