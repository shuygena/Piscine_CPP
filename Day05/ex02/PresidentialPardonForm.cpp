#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("name", 25, 5)
{
    std::cout << "Default constructor called. PresidentialPardonForm was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5)
{
    std::cout << "Constructor with param called. PresidentialPardonForm was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & ref): Form(ref)
{
    std::cout << "Copy constructor called. PresidentialPardonForm was created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default destructor called. PresidentialPardonForm was deleted" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	(void)ref;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}