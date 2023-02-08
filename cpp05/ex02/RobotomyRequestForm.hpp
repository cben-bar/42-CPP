


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class RobotomyRequestForm: public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &origin);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
        ~RobotomyRequestForm();

        std::string     getTarget() const;
        virtual void    execute(Bureaucrat const &executor) const;
};

#endif