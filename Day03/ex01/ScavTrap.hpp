#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(const  ScavTrap& ScavTrap);
        ~ScavTrap();
        ScavTrap& operator= (const ScavTrap &ScavTrap);

        void attack(std::string const &target);
        void guardGate(void);

    private:
        ScavTrap();
};

#endif