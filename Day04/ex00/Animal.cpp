#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "Default constructor called. Animal was created"
            << std::endl;
}

Animal::Animal(Animal & copy)
{
    std::cout << "Copy constructor called. Animal was created" << std::endl;
    *this = copy;  
}

Animal::~Animal()
{
    std::cout << "Default destructor called. Animal was deleted"
            << std::endl;
}        

Animal    &Animal::operator= (const Animal    &Animal)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &Animal)
        this->type = Animal.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return(this->type);
}

void Animal::makeSound(void) const
{
    //std::cout << "My type is " << this->getType();
    std::cout << "* random animal sound *" << std::endl;
}