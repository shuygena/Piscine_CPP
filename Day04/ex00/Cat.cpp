#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default constructor called. Cat was created"
            << std::endl;
}

Cat::Cat(Cat & copy)
{
    std::cout << "Copy constructor called. Cat was created" << std::endl;
    *this = copy;  
}

Cat::~Cat()
{
    std::cout << "Default destructor called. Cat was deleted"
            << std::endl;
}        

Cat    &Cat::operator= (const Cat    &ref)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "meow (=^_^=)" << std::endl;
}