#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "poly called" << std::endl;
	name = "Default";
	hits_point = 100;
	energy_points = 50;
	attack_damage = 20;
}

ClapTrap::ClapTrap(std::string name_up)
{
	name = name_up;
	hits_point = 100;
	energy_points = 50;
	attack_damage = 20;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Poly Destructor Called!" << std::endl;
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
	std::cout << "ClapTrap " << name << " has taken " << amount << " in attack damge! (Hits == " << hits_point << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hits_point || energy_points)
	{
		std::cout << "ClapTrap " << name << " gets " << amount << " hit points back!" << std::endl;
		hits_point += amount;
	}
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	name = copy.name;
	hits_point = copy.hits_point;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return(*this);
}
