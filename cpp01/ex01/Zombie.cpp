#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << std::endl;
}

Zombie::Zombie(void)
{

}

void	Zombie::set(std::string name_up)
{
    name = name_up;
}