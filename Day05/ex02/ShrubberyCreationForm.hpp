#ifndef SHRUBERRYREQUESTFORM_HPP
# define SHRUBERRYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm: public Form
{
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string _name);
        ShrubberyCreationForm(const ShrubberyCreationForm & ref);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ref);
        void execute(Bureaucrat const &executor) const;
};

#endif