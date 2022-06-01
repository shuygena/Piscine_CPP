#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap ObiWan("ObiWan");
    ScavTrap DartVader("DartVader");

    ObiWan.attack(DartVader.getName());
    DartVader.takeDamage(3);
    DartVader.beRepaired(5);
    DartVader.attack(ObiWan.getName());
    ObiWan.takeDamage(20);
    DartVader.guardGate();

    return (0);
}