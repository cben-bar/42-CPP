/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:35:18 by beni              #+#    #+#             */
/*   Updated: 2023/02/04 17:26:11 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AForm;
class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &origin);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &origin);
        ~ShrubberyCreationForm();

        std::string     getTarget() const ;
        void            shrubberyDisplay(std::string target);
        void            execute(Bureaucrat const & executor) const; 

    private:
        std::string _target;
};

#endif