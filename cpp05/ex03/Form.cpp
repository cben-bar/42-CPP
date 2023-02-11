/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <cben-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:23:58 by beni              #+#    #+#             */
/*   Updated: 2023/02/08 20:42:03 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Form::Form(): _name("topSecret"), _signed(false), _grade_to_sign(1), _grade_to_execute(2)
{
    return ;
}

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signed(false), _grade_to_sign(signGrade), _grade_to_execute(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowExcpetion();
    else if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    return ;
}

Form::Form(const Form &origin): _name(origin.getName()), _signed(origin.getSigned()), _grade_to_sign(origin.getGradeToSign()), _grade_to_execute(origin.getGradeToExec())
{
    *this = origin;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Form    &Form::operator=(const Form &origin)
{
    if (this == &origin)
        return (*this);
    this->_signed = origin.getSigned();
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, const Form &rhs)
{
    o << GREY << rhs.getName() << "'s info" << std::endl;
    o << BLAND_BLUE << "Form state: " << rhs.getSigned() << std::endl;
    o << STORM_BLUE << "Grade required to sign: " << rhs.getGradeToSign() << std::endl;
    o << CYAN << "Grade required to execute: " << rhs.getGradeToExec();
    return (o);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Form::~Form()
{
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

const std::string   Form::getName() const
{
    return (this->_name);
}

bool                Form::getSigned() const
{
    return (this->_signed);
}

int                 Form::getGradeToSign() const
{
    return (this->_grade_to_sign);
}

int                 Form::getGradeToExec() const
{
    return (this->_grade_to_execute);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() <= this->getGradeToSign())
        {
            if (this->getSigned() == 1)
                std::cout << FLUO_GREEN << "Form " << this->getName() << " is already signed." << std::endl;
            else
                this->_signed = true;
        }
        else
            throw GradeTooLowExcpetion();
    }
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return ;
}

///////////////////////////////////////
//*/ */ */ */ EXCEPTIONS  /* /* /* /*//
///////////////////////////////////////

const char *Form::GradeTooLowExcpetion::what() const throw()
{
    return ("EXCEPTION: Bureaucrat grade is too low to sign.");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("EXCEPTION: Bureaucrat grade is too high to sign. Yes, I know, it's strange.");
}