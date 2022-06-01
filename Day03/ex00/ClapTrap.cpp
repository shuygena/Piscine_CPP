#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called. ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor with param called. ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called. ClapTrap was created" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called. ClapTrap " << _name << " was deleted" << std::endl;
}

ClapTrap    &ClapTrap::operator= (const ClapTrap &clapTrap)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this == &clapTrap)
        return (*this);
    _name = clapTrap._name;
    _hitPoints = clapTrap._hitPoints;
    _energyPoints = clapTrap._energyPoints;
    _attackDamage = clapTrap._attackDamage;
    return (*this);
}

std::string ClapTrap::getName(void ) const
{
    return _name;
}

int         ClapTrap::getHitPoint(void) const
{
    return _hitPoints;
}

int         ClapTrap::getEnergyPoints(void) const
{
    return _energyPoints;
}

int         ClapTrap::getAttackDamage(void) const
{
    return _attackDamage;
}

void        ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
                << _attackDamage << " points of damage!" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage" << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " is repaired, it gets "
            << amount << " points of health" << std::endl;
}