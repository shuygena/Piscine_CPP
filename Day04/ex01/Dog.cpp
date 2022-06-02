#include "Dog.hpp"

Dog::Dog()
{    
    std::cout << "Default constructor called. Dog was created"
            << std::endl;
    this->type = "Dog";
    this->dogBrain = new Brain();
}

Dog::Dog(const Dog & copy)
{
    std::cout << "Copy constructor called. Dog was created" << std::endl;
    *this = copy;  
}

Dog::~Dog()
{
    std::cout << "Default destructor called. Dog was deleted"
            << std::endl;
    delete dogBrain;
}        

Dog    &Dog::operator= (const Dog &ref)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &ref)
    {
        if (this->dogBrain == NULL)
            this->dogBrain = new Brain();
        this->type = ref.type;
        for (int i = 0; i < 100; i++)
            this->dogBrain->setIdea(ref.dogBrain->getIdea(i), i);
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "woof (▽◕ ᴥ ◕▽)" << std::endl;
}