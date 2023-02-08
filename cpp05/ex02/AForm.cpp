/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:23:58 by beni              #+#    #+#             */
/*   Updated: 2023/02/04 16:46:15 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

AForm::AForm(): _name("topSecret"), _signed(false), _grade_to_sign(1), _grade_to_execute(2)
{
//  std::cout << PARMA << "Form default constructor called." << std::endl;
    return ;
}

AForm::AForm(std::string name, int signGrade, int execGrade): _name(name), _grade_to_sign(signGrade), _grade_to_execute(execGrade)
{
//  std::cout << PASTEL_PINK << "Form constructor called with name and grade." << std::endl;
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowExcpetion();
    else if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    return ;
}

AForm::AForm(const AForm &origin): _name(origin.getName()), _grade_to_sign(origin.getGradeToSign()), _grade_to_execute(origin.getGradeToExec())
{
    *this = origin;
//  std::cout << VIOLET << "Form copy constructor called." << std::endl;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

AForm    &AForm::operator=(const AForm &origin)
{
    if (this == &origin)
        return (*this);
    this->_signed = origin.getSigned();
//  std::cout << PASTEL_PURPLE << "Form copy assignment operator called." << std::endl;
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, const AForm &rhs)
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

AForm::~AForm()
{
//  std::cout << PARMA << "Form destructor called for " << this->_name << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

const std::string   AForm::getName() const
{
    return (this->_name);
}

bool                AForm::getSigned() const
{
    return (this->_signed);
}

int                 AForm::getGradeToSign() const
{
    return (this->_grade_to_sign);
}

int                 AForm::getGradeToExec() const
{
    return (this->_grade_to_execute);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

void    AForm::beSigned(Bureaucrat &bureaucrat)
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

const char *AForm::GradeTooLowExcpetion::what() const throw()
{
    return ("EXCEPTION: Bureaucrat grade is too low to sign.");
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("EXCEPTION: Bureaucrat grade is too high too sign. Yes, I know, it's strange.");
}

const char *AForm::GradeTooLowExecute::what() const throw()
{
    return ("EXCEPTION: Bureaucrat grade is too low to execute.");
}

const char *AForm::GradeTooHighExecute::what() const throw()
{
    return ("EXCEPTION: Bureaucrat grade is too high to execute. Yes, I know, it's strange.");
}

const char *AForm::UnsignedForm::what() const throw()
{
    return ("EXCEPTION : Missing signature on the form.");
}