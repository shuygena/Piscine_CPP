#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombies;
    int i;

    zombies = new Zombie[N];
    for (i = 0; i < N; i++)
        zombies[i].set_name(name);
    return (zombies);
}