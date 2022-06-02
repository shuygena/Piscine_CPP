#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat & copy);
        ~WrongCat();

        WrongCat &operator=(const WrongCat & ref);
        void makeSound(void) const;
};

#endif