#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon	&weapon_ref;
	public:
	HumanA();
	~HumanA();
	attack();
}

#endif