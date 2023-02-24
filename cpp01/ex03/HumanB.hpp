#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon	*humanb_weapon;

	public:
	HumanB(std::string name_up);
	~HumanB();
	HumanB();
	void    attack();
    void    setWeapon(Weapon humanb_weapon_up);
};

#endif