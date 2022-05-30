#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:
            std::string _name;
            Weapon& _weapon;
    public:
            HumanA(Weapon& weaponType);
            ~HumanA();
            HumanA(std::string _name, Weapon& weaponType);

            void attack();
};

#endif