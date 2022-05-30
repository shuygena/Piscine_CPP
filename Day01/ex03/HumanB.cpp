#include "HumanB.hpp"

HumanB::HumanB(){
    this->_name = "Lone Wolf";
    std::cout << " * Ninja " << this->_name << " apeared *" << std::endl;
}

HumanB::~HumanB(){
    std::cout << "~ " << this->_name << " hid in the shadows ~" << std::endl;
}

HumanB::HumanB(std::string name): _name(name)
{
    std::cout << " * Ninja " << this->_name << " apeared *" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->_name << " attacked with " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weaponType)
{
    this->_weapon = &weaponType;
}