#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog & copy);
        ~Dog();

        Dog &operator=(const Dog & ref);
        void        makeSound(void) const;
};

#endif