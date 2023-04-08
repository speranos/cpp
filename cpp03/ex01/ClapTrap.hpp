#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
	std::string		name;
	unsigned int	hits_point;
	unsigned int	energy_points;
	unsigned int	attack_damage;

	public:
	ClapTrap();
	ClapTrap(std::string name_up);
	ClapTrap(ClapTrap &copy);
	~ClapTrap();
	ClapTrap	&operator= (const ClapTrap &copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif