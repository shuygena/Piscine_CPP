#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("kunai");
        HumanA Sakura("Sakura", club);
        Sakura.attack();
        club.setType("shuriken");
        Sakura.attack();
    }
    {
        Weapon club = Weapon("rasengan");
        HumanB Naruto("Naruto");
        Naruto.setWeapon(club);
        Naruto.attack();
        club.setType("rasen shuriken");
        Naruto.attack();
    }

    Weapon clubUchiha = Weapon("sharingan");
    HumanA Kakashi("Kakashi", clubUchiha);
    HumanA Sasuke(clubUchiha);

    Sasuke.attack();
    Kakashi.attack();
    clubUchiha.setType("susano");
    Sasuke.attack();
    Kakashi.attack();
    return (0);
}