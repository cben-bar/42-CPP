/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:07:13 by beni              #+#    #+#             */
/*   Updated: 2023/02/04 22:19:53 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(std::string const name, int signGrade, int execGrade);
        Form(const Form &origin);
        Form &operator=(const Form &origin);
        ~Form();

        const std::string   getName() const;
        bool                getSigned() const;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        void                beSigned(Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowExcpetion : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    private:
        const std::string   _name;
        bool                _signed;
        int                 _grade_to_sign;
        int                 _grade_to_execute;
    
};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif