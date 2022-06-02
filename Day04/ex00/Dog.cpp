#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default constructor called. Dog was created"
            << std::endl;
}

Dog::Dog(Dog & copy)
{
    std::cout << "Copy constructor called. Dog was created" << std::endl;
    *this = copy;  
}

Dog::~Dog()
{
    std::cout << "Default destructor called. Dog was deleted"
            << std::endl;
}        

Dog    &Dog::operator= (const Dog &ref)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "woof (▽◕ ᴥ ◕▽)" << std::endl;
}