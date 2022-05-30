#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
            std::string _name;
            Weapon* _weapon;
    public:
            HumanB();
            ~HumanB();
            HumanB(std::string _name);
            

            void attack();
            void setWeapon(Weapon& weaponType);
};

#endif