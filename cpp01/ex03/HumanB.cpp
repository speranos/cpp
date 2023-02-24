#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "";
}

HumanB::HumanB(std::string name_up)
{
    name = name_up;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << humanb_weapon->getType() << std::endl;

}

void    HumanB::setWeapon(Weapon humanb_weapon_up)
{
    humanb_weapon = &humanb_weapon_up;
}


HumanB::~HumanB()
{

}