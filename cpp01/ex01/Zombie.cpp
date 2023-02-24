#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << std::endl;
}

void	Zombie::set(std::string name_up)
{
    name = name_up;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombies: " << name << " has been killed" << std::endl;
}

Zombie::Zombie(void)
{
    name = "default";
}