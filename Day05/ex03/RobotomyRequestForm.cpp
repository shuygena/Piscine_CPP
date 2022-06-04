#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("name", 72, 45)
{
    std::cout << "Default constructor called. RobotomyRequestForm was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45)
{
    std::cout << "Constructor with param called. RobotomyRequestForm was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & ref): Form(ref)
{
    std::cout << "Copy constructor called. RobotomyRequestForm was created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default destructor called. RobotomyRequestForm was deleted" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	(void)ref;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (rand() % 100 < 50)
    {
        std::cout<< "*some drilling noises*" << std::endl;
        std::cout << this->getName() << " has been robotomized successfuly 50% of the time" << std::endl;
    }
    else
        std::cout << "It's a failure" << std::endl;
}