#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "scav called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scav Destructor Called!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(hits_point || energy_points)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
}

ScavTrap::ScavTrap(std::string name_up)
{
    name = name_up;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	name = copy.name;
	hits_point = copy.hits_point;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return(*this);
}

// ScavTrap::ScavTrap(ScavTrap &copy)
// {
//     *this = copy;
// }