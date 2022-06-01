#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();

        ClapTrap    &operator= (const ClapTrap &clapTrap);
        std::string getName(void ) const;
        int         getHitPoint(void) const;
        int         getEnergyPoints(void) const;
        int         getAttackDamage(void) const;

        void        attack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
    
    protected:
        ClapTrap();
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;        
};

#endif