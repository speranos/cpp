#include "HumanA.hpp"

void    HumanA::attack() 
{
    std::cout << name << " attacks with their " << humana_weapon.getType() << std::endl;

}

HumanA::HumanA(std::string name_up, Weapon	&humana_weapon_up) : humana_weapon(humana_weapon_up)
{
    humana_weapon = humana_weapon_up;
    name = name_up;
}

HumanA::~HumanA()
{
    
}