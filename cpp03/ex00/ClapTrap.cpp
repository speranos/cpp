#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Default";
	hits_point = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name_up)
{
	name = name_up;
	hits_point = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(hits_point || energy_points)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > hits_point)
		hits_point = 0;
	else
		hits_point -= amount;
	std::cout << "ClapTrap " << name << " has taken " << amount << " in attack damge!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hits_point || energy_points)
	{
		std::cout << "ClapTrap " << name << " gets " << amount << " hit points back!" << std::endl;
		hits_point += amount;
	}
}