#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Anon"), _grade(75)
{
    std::cout << "Default constructor called. Bureaucrat " 
            <<this->_name << " was created with grade " << this->_grade
            << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{
    if (name == "")
        throw EmptyName();
    if (this->_grade < 1)
        throw GradeTooHighException();
    if (this->_grade > 150)
        throw GradeTooLowException();
    std::cout << "Constructor with param called. Bureaucrat " 
            <<this->_name << " was created with grade " << this->_grade
            << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Copy constructor called. Bureuacrat was crated" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called. Bureuacrat was deleted" << std::endl;
}

std::string const Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
	    this->_grade = other.getGrade();
	return (*this);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " didn't sign: " << form.getName()
                << ", because " << e.what() << std::endl;
    }
    
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &ref)
{
    out << ref.getName() << " has " << ref.getGrade() << std::endl;
    return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char *Bureaucrat::EmptyName::what() const throw()
{
    return ("Empty name");
}
