#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name << ": is dead" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set(std::string name_up)
{
    name = name_up;
}
