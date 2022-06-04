#ifndef PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm: public Form
{
    private:
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm(const PresidentialPardonForm & ref);
        ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);
        void execute(Bureaucrat const &executor) const;
        
};

#endif