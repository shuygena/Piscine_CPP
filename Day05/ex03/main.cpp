#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern SberIntern;
    Bureaucrat Gref("German", 1);
    Form * one;
    Form * two;

    one = SberIntern.makeForm("robotomy request", "credit");
    Gref.signForm(*one);
    try
    {
    two = SberIntern.makeForm("charity", "debet");
    }
    catch (std::exception &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
    delete one;
    return (0);
}