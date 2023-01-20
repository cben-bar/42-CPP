/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:02:10 by beni              #+#    #+#             */
/*   Updated: 2023/01/20 15:20:30 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
    public:
        Brain();
        Brain(const Brain &origin);
        Brain &operator=(const Brain &origin);
        virtual ~Brain();

        void        setIdea(unsigned int, std::string idea);
        std::string getIdea(unsigned int) const;

    private:
        std::string _ideas[100];
};

#endif