#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    private:
        Form *Pres(std::string target);
        Form *Rob(std::string target);
        Form *Shrub(std::string target);
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);

        Intern &operator=(Intern const &ref);
        Form *makeForm(std::string form, std::string target);


    class NotExist: public std::exception
    {
        public:
            const char* what() const throw();
    };
};

#endif