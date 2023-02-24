#include "Zombie.hpp"

Zombie	*newzombie(std::string name)
{
	Zombie *new_zombie;
	
	new_zombie = new Zombie;
	new_zombie->set(name);
	return(new_zombie);
}