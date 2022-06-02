#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal & copy);
        ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal & WrongAnimal);
        std::string getType(void) const;
        void        makeSound(void) const;
};

#endif