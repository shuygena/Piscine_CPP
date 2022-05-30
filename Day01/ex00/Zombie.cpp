#include "Zombie.hpp"

Zombie::Zombie()
{
    this->_name = "Weasley";
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " died" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
