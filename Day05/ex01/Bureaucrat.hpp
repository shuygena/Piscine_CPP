#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;
        Bureaucrat();

    public:
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &other);
        std::string const   getName() const;
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
        void				signForm(Form &form);

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw();
        };
        class EmptyName: public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref);

#endif