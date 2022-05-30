#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
    Zombie Fred = Zombie("Fred");
    Zombie *George = newZombie("George");
    Fred.announce();
    George->announce();
    randomChump("Draco");
    delete George;
    return (0);
}
