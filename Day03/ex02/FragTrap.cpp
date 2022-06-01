# include <iostream>
# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Default constructor called. FragTrap was created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Constructor with param called. FragTrap was created" << std::endl;
}
FragTrap::FragTrap(const FragTrap &refFrag)
{
    std::cout << "Copy constructor called. FragTrap was created" << std::endl;
    *this = refFrag;
}

FragTrap::~FragTrap()
{
    std::cout << "Default destructor called. FragTrap " << _name << " was deleted" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &refFrag)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this == &refFrag)
        return (*this);
    _name = refFrag._name;
    _hitPoints = refFrag._hitPoints;
    _energyPoints = refFrag._energyPoints;
    _attackDamage = refFrag._attackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " make Clap1, Clap2, Clap3, Clap4, Clap5" << std::endl;
}


