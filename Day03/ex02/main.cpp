#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap ObiWan("ObiWan");
    ScavTrap DartVader("DartVader");
    FragTrap Luke("LukeSkywalker");

    ObiWan.attack(DartVader.getName());
    DartVader.takeDamage(3);
    DartVader.beRepaired(5);
    DartVader.attack(Luke.getName());
    Luke.takeDamage(20);
    DartVader.guardGate();
    Luke.attack(DartVader.getName());

    return (0);
}