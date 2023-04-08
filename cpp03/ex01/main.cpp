#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap a("A");
	// ClapTrap b("B");
	ScavTrap c("blaka");
	ScavTrap a;
	ClapTrap x;

	c = a;

	// c.beRepaired(3);
	c.attack("FG");
	c.takeDamage(10);
	x.attack("gt");
	x.beRepaired(10);
	x.takeDamage(20);
	
	// a.attack("B");
	// b.takeDamage(5);
	// b.beRepaired(3);
	// b.attack("A");
	// a.takeDamage(10);
	// a.beRepaired(10);
	return (0);
}
