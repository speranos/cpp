#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string type;
public:
	Weapon(std::string type_up);
	Weapon();
	~Weapon();
	void	setType(std::string	type_up);
	std::string	&getType();
};

// Weapon::Weapon(/* args */)
// {
// }

// Weapon::~Weapon()
// {
// }

#endif