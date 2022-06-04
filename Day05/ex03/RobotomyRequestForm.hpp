#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class RobotomyRequestForm: public Form
{
    private:
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string _name);
        RobotomyRequestForm(const RobotomyRequestForm & ref);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const &ref);
        void execute(Bureaucrat const &executor) const;      
};

#endif