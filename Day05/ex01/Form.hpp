#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        std::string const   _name;
        bool                _signed;
        const int           _grReq;
        const int           _grEx;
        Form();

    public:
        Form(const std::string name, const int req, const int execute);
        Form(const Form &copy);
        ~Form();

        Form &operator=(const Form &copy);

        std::string const   getName() const;
        int                 getReq() const;
        int                 getEx() const;
        bool                getSigned() const;
        void                beSigned(Bureaucrat &ref);

        class GradeTooHighException: public std::exception
        {
            public:
                const char * what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                const char * what() const throw();
        };
};

std::ostream &operator<< (std::ostream &out, const Form &form);

#endif