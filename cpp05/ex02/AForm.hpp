/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:07:13 by beni              #+#    #+#             */
/*   Updated: 2023/02/04 16:49:40 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm();
        AForm(std::string const name, int signGrade, int execGrade);
        AForm(const AForm &origin);
        AForm &operator=(const AForm &origin);
        ~AForm();

        const std::string   getName() const;
        bool                getSigned() const;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        void                beSigned(Bureaucrat &bureaucrat);
        virtual void        execute(Bureaucrat const & executor) const = 0;

    private:
        const std::string   _name;
        bool                _signed;
        int                 _grade_to_sign;
        int                 _grade_to_execute;
    
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
    class GradeTooHighExecute : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowExecute : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const AForm &rhs);

#endif