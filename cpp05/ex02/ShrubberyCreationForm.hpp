/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:19:57 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/08 19:21:51 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

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

        std::string     getTarget() const;
        void            shrubberyDisplay(std::string target);
        virtual void    execute(Bureaucrat const &executor) const;

    private:
        std::string _target;
};

#endif