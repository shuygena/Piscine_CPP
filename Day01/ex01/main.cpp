#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    int N;
    Zombie *zombies;
    int i;

    N = 8;
    zombies = zombieHorde(N, "The Cranberries");
    for (i = 0; i < N; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}