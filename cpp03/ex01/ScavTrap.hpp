#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name_up);
    // ClapTrap(ClapTrap &copy);
    ~ScavTrap();
    ScavTrap	&operator= (const ScavTrap &copy);
    void    guardGate();
    void attack(const std::string& target);
};


#endif