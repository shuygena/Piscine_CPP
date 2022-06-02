#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog & copy);
        ~Dog();

        Dog &operator=(const Dog & ref);
        void        makeSound(void) const;

        private:
            Brain *dogBrain;       
};

#endif