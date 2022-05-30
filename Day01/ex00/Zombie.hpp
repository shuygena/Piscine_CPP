#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string _name;
    
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);

        void announce(void);
};

#endif