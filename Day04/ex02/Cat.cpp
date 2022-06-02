#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor called. Cat was created"
            << std::endl;
    this->type = "Cat";
    this->catBrain = new Brain();
    
}

Cat::Cat(const Cat & copy)
{
    std::cout << "Copy constructor called. Cat was created" << std::endl;
    type = "Cat";
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Default destructor called. Cat was deleted"
            << std::endl;
    delete catBrain;
}        

Cat    &Cat::operator= (const Cat    &ref)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &ref)
    {
        if (this->catBrain == NULL)
            this->catBrain = new Brain();
        this->type = ref.type;
        for (int i = 0; i < 100; i++)
            this->catBrain->setIdea(ref.catBrain->getIdea(i), i);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "meow (=^_^=)" << std::endl;
}