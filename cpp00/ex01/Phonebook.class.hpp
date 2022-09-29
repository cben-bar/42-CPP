/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:11:49 by cben-bar          #+#    #+#             */
/*   Updated: 2022/09/29 16:28:58 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

class Phonebook
{
		public:
			Phonebook(void);
			~Phonebook(void);
			void	setContact(int i);
			void	getContact(int i) const;

		private:
			Contact contact[8];
}

#endif