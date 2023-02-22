
#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde;
	int		i = 0;
	(void)name;
	zombieHorde = new Zombie[N];
	while(i < N)
	{
		zombieHorde[i].set("kaisa");
		zombieHorde[i].announce();
		i++;
	}
	return(zombieHorde);
}