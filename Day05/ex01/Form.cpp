#include "Form.hpp"

Form::Form() :
    _name("blank"), _grReq(150), _grEx(150)
{
    std::cout << "Default constructor called. Form was created" << std::endl;
}

Form::Form(const std::string name, const int req, const int execute) :
    _name(name), _grReq(req), _grEx(execute)
{
    this->_signed = false;
    if (_grReq > 150 || _grEx > 150)
        throw GradeTooLowException();
    if (_grReq < 1 || _grEx < 1)
        throw GradeTooHighException();
    std::cout << "Constructor with param called. Form was created" << std::endl;
}

Form::Form(const Form &copy): _name(copy.getName()), _signed(copy.getSigned()), _grReq(copy.getReq()), _grEx(copy.getEx())
{
    
    std::cout << "Copy constructor called. Form was created" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor called. Form was deleted" << std::endl;
}


Form &Form::operator=(const Form &copy)
{
    if (this != &copy)
        this->_signed = copy.getSigned();
    return(*this);
}

std::string const Form::getName() const
{
    return _name;
}

int Form::getReq() const
{
    return _grReq;
}

int Form::getEx() const
{
    return _grEx;
}

bool Form::getSigned() const
{
    return (this->_signed);
}

void Form::beSigned(Bureaucrat &ref)
{
    if (ref.getGrade() <= this->_grReq)
        this->_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<< (std::ostream &out, const Form &form)
{
    out << form.getName() << " has grade for requered: "
            << form.getReq() << " and  grade for execute: "
            << form.getEx() << std::endl;
    return (out);
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}