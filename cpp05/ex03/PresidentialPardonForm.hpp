/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:10:52 by cben-bar          #+#    #+#             */
/*   Updated: 2023/02/10 16:29:45 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class PresidentialPardonForm: public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm & origin);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);
        ~PresidentialPardonForm();

        std::string     getTarget() const;
        virtual void    execute(Bureaucrat const &executor) const;

    private:
        std::string     _target;
};

#endif