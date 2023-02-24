#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
	std::string name;
	Weapon	&humana_weapon;
	
	public:
	HumanA(std::string name_up, Weapon	&humana_weapon_up);
	HumanA();
	~HumanA();
	void	attack();
};

#endif