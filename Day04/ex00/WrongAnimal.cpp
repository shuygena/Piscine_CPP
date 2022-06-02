#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "Default constructor called. WrongAnimal was created"
            << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & copy)
{
    std::cout << "Copy constructor called. WrongAnimal was created" << std::endl;
    *this = copy;  
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default destructor called. WrongAnimal was deleted"
            << std::endl;
}        

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &ref)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Rrroarrr" << std::endl;
}