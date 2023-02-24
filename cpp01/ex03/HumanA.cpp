#include "HumanA.hpp"

void    HumanA::attack() 
{
    std::cout << name << " attacks with their " << humana_weapon.getType() << std::endl;

}

HumanA::HumanA(std::string name_up, Weapon	&humana_weapon_up): humana_weapon(humana_weapon_up)
{
    this->name = name_up;
    this->humana_weapon = humana_weapon_up;
}

HumanA::~HumanA()
{
    
}