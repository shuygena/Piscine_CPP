#include "Intern.hpp"

typedef Form*(Intern::*maker) (std::string);

Form *Intern::Pres(std::string target)
{
    PresidentialPardonForm *tmp = new PresidentialPardonForm(target);
    return (tmp);
}
Form *Intern::Rob(std::string target)
{
    RobotomyRequestForm *tmp = new RobotomyRequestForm(target);
    return(tmp);
}

Form *Intern::Shrub(std::string target)
{
    ShrubberyCreationForm *tmp = new ShrubberyCreationForm(target);
    return(tmp);
}

Intern::Intern()
{
    std::cout << "Default constructor called. Intern was created" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Default destructor called. Intern was deleted" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator= (const Intern &ref)
{
    (void)ref;
    return(*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
    maker array[] = {&Intern::Pres, &Intern::Rob, &Intern::Shrub};
    int lvl = (form == "shrubbery creation") * 3  + (form == "robotomy request") * 2
            + (form == "presidential pardon") * 1;
    switch(lvl)
    {
        case 1:
            return (this->*array[0])(target);
            break;
        case 2:
            return (this->*array[1])(target);
            break;
        case 3:
            return (this->*array[2])(target);
            break;
        default:
            throw NotExist();
            break;
    }
    return NULL;
}

const char *Intern::NotExist::what() const throw()
{
    return ("This form doesn't exist");
}