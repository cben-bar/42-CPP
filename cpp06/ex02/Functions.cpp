/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:06:10 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/19 19:20:10 by cben-bar         ###   ########.fr       */
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
	switch (random)
	{
		case 1:
		{
			std::cout << "Generate: A. --OK--" << std::endl;
			return (new(A));
		}
		case 2:
		{
			std::cout << "Generate: B. --OK--" << std::endl;
			return (new(B));
		}
		case 3:
		{
			std::cout << "Generate: C. --OK--" << std::endl;
			return (new(C));
		}
		default:
			break;
	}
	return (NULL);
}

// void identify(Base* p)
// {
// 	// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
// }

// void identify(Base& p);
// {
// 	// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". Utiliser un pointeur
// 	// dans cette fonction est interdit.
// }