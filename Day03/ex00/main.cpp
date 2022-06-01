#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ObiWan("ObiWan");
    ClapTrap DartVader("DartVader");
    ClapTrap AnakinSkywalker(DartVader);

    ObiWan.attack(AnakinSkywalker.getName());
    AnakinSkywalker.takeDamage(3);
    AnakinSkywalker.beRepaired(5);

    return (0);
}