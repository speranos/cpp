#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>


class   Zombie
{
	std::string name;
	public:
	~Zombie();
	void    announce(void);
	void	set(std::string name_up);
};

void    randomChump(std::string name);
Zombie	*newzombie(std::string name);

#endif