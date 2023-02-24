#include "Zombie.hpp"

int	main()
{
	Zombie *a;
	randomChump("kaisa");
	a = newzombie("holla");
	a->announce();
	delete a;
	while (1);
	
}