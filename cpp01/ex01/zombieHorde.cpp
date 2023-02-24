
#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde;
	int		i = 0;

	zombieHorde  = new Zombie[N];
	while(i < N)
	{
		zombieHorde[i].set(name);
		zombieHorde[i].announce();
		i++;
	}
	return(zombieHorde);
}