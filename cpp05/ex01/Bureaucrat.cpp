/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:03:40 by beni              #+#    #+#             */
/*   Updated: 2023/01/27 20:00:36 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

///////////////////////////////////////
//*/ */ */ */ CONSTRUCTORS/* /* /* /*//
///////////////////////////////////////

Bureaucrat::Bureaucrat()
{
//    std::cout << PARMA << "Bureaucrat default constructor called." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
//    std::cout << PASTEL_PINK << "Bureaucrat constructor called with name and grade." << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin): _name(origin.getName()) 
{
    *this = origin;
//    std::cout << VIOLET << "Bureaucrat copy constructor called." << std::endl;
}

///////////////////////////////////////
//*/ */ */ */  ASSIGNMENT /* /* /* /*//
///////////////////////////////////////

Bureaucrat     &Bureaucrat::operator=(const Bureaucrat &origin)
{
    if (this == &origin)
        return (*this);
    this->_grade = origin.getGrade();
//    std::cout << PASTEL_PURPLE << "Bureaucrat copy assignment operator called." << std::endl;
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (o);
}

///////////////////////////////////////
//*/ */ */ */  DESTRUCTOR /* /* /* /*//
///////////////////////////////////////

Bureaucrat::~Bureaucrat()
{
//    std::cout << PARMA << "Bureaucrat destructor called." << std::endl;
    return ;
}

///////////////////////////////////////
//*/ */ */ */    GETTER   /* /* /* /*//
///////////////////////////////////////

const std::string   Bureaucrat::getName() const
{
    return (this->_name);
}

int                 Bureaucrat::getGrade() const
{
    return (this->_grade);
}

///////////////////////////////////////
//*/ */ */ */  FUNCTIONS  /* /* /* /*//
///////////////////////////////////////

int    Bureaucrat::incGrade()
{
    if (this->_grade > 1)
    {
        this->_grade--;
        std::cout << POOL_GREEN << this->getName() << " just received a promotion." << std::endl;
    }
    else
    {
        std::cout << PASTEL_GREEN << this->getName() << " can no longer receive promotion: maximum rank reached." << std::endl;
        throw GradeTooHighException();
    }
    return (this->_grade);
}

int    Bureaucrat::decGrade()
{
    if (this->_grade < 150)
    {
        this->_grade++;
        std::cout << RED << this->getName() << " just lost a grade." << std::endl;
    }
    else
    {
        std::cout << PASTEL_GREEN << this->getName() << " can't be downgrade: grade already too lower." << std::endl;
        throw GradeTooLowException();
    }
    return (this->_grade);
}

void        Bureaucrat::signForm(Form &form)
{
    try
    {
        if (!form.getSigned())
        {
            form.beSigned(*this);
            std::cout << PASTEL_PURPLE << this->getName() << " signed " << form.getName() << "." << std::endl;
        }
        else
            std::cout << PASTEL_PURPLE << this->getName() << "add signature on " << form.getName() << "." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << BLOOD_RED << this->_name << "couldn't sign " << form.getName() << " because " << e.what() << '\n';
    }
    

    return ;
}

///////////////////////////////////////
//*/ */ */ */ EXCEPTIONS  /* /* /* /*//
///////////////////////////////////////

const char  *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low.");
}

const char  *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too high.");
}
