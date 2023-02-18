/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:00:08 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/18 18:13:48 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Base::~Base()
{
	return;
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS /* /* /* /*//
///////////////////////////////////////

Base::Base * generate(void)
{
	// Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur
	// Base. Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire.
}
void identify(Base* p)
{
	// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
}

void identify(Base& p);
{
	// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". Utiliser un pointeur
	// dans cette fonction est interdit.
}