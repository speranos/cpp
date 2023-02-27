#include "HumanB.hpp"

HumanB::HumanB()
{
	name = "";
}

HumanB::HumanB(std::string name_up)
{
	name = name_up;
}

void    HumanB::attack()
{
	if(humanb_weapon)
		std::cout << name << " attacks with their " << humanb_weapon->getType() << std::endl;
	else
	std::cout << name << " is unarmed !!!" << std::endl;
}

void    HumanB::setWeapon(Weapon &humanb_weapon_up)
{
	humanb_weapon = &humanb_weapon_up;
}

HumanB::~HumanB()
{

}