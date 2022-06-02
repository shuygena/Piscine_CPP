#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Default constructor called. WrongCat was created"
            << std::endl;
}

WrongCat::WrongCat(WrongCat & copy)
{
    std::cout << "Copy constructor called. WrongCat was created" << std::endl;
    *this = copy;  
}

WrongCat::~WrongCat()
{
    std::cout << "Default destructor called. WrongCat was deleted"
            << std::endl;
}        

WrongCat    &WrongCat::operator= (const WrongCat    &ref)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &ref)
        this->type = ref.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "meow (=^_^=)" << std::endl;
}