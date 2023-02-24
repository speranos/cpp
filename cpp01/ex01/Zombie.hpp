#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

class   Zombie
{
	std::string name;
	public:
	Zombie();
	~Zombie();
	void    announce(void);
	void	set(std::string name_up);
};

Zombie	*zombieHorde( int N, std::string name );
#endif