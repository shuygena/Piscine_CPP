#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &refFrag);
        ~FragTrap();
        FragTrap& operator= (const FragTrap &refFrag);

        void highFivesGuys(void);

    private:
        FragTrap();
};

#endif