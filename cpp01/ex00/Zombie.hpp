#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

void    randomChump(std::string name);
Zombie	*newzombie(std::string name);

class   Zombie
{
	std::string name;
	public:
	void    announce(void)
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void	set(std::string name_up)
	{
		name = name_up;
	}
};

#endif