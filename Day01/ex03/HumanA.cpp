#include "HumanA.hpp"

HumanA::HumanA(Weapon& weaponType):_weapon(weaponType){
    this->_name = "Lone Wolf";
    std::cout << " * Ninja " << this->_name << " apeared *" << std::endl;
}

HumanA::~HumanA(){
    std::cout << "~ " << this->_name << " hid in the shadows ~" << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weaponType): _name(name), _weapon(weaponType)
{
    std::cout << " * Ninja " << this->_name << " apeared *" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacked with " << this->_weapon.getType() << std::endl;
}
