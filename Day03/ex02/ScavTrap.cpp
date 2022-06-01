#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Default constructor called. ScavTrap was created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) 
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Constructor with param called. ScavTrap was created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "Copy constructor called. ScavTrap was created" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default destructor called. ScavTrap " << _name << " was deleted" << std::endl;
}

ScavTrap    &ScavTrap::operator= (const ScavTrap &scavTrap)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this == &scavTrap)
        return (*this);
    _name = scavTrap._name;
    _hitPoints = scavTrap._hitPoints;
    _energyPoints = scavTrap._energyPoints;
    _attackDamage = scavTrap._attackDamage;
    return (*this);
}

void       ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
                << _attackDamage << " points of damage! I'm stronger!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode. " << std::endl;
}