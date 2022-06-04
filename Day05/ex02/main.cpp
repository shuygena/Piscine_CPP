#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat Minevra("Minevra", 2);
    Bureaucrat Severus("Severus", 70);
    Bureaucrat Hagrid("Hagrid", 138);
    Bureaucrat Remus("Remus", 25);

    PresidentialPardonForm Gryffindor("Gryffindor");
    RobotomyRequestForm Slytherin("Slytherin");
    ShrubberyCreationForm Ravenclaw("Ravenclaw");
    std::cout << std::endl;

    std::cout << Gryffindor;
    std::cout << Severus;
    Severus.signForm(Gryffindor);
    std::cout << Remus;
    Remus.signForm(Gryffindor);
    Remus.executeForm(Gryffindor);
    std::cout << Minevra;
    Minevra.executeForm(Gryffindor);
    std::cout << std::endl;

    std::cout << Slytherin;
    std::cout << Hagrid;
    Hagrid.signForm(Slytherin);
    std::cout << Severus;
    Severus.signForm(Slytherin);
    std::cout << Remus;
    Remus.executeForm(Slytherin);
    std::cout << std::endl;

    std::cout << Ravenclaw;
    std::cout << Hagrid;
    Hagrid.signForm(Ravenclaw);
    std::cout << Severus;
    Severus.executeForm(Ravenclaw);
    std::cout << std::endl;

    return (0);
}