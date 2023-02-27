#include "Weapon.hpp"

void    Weapon::setType(std::string type_up)
{
    type = type_up;
}

std::string &Weapon::getType()
{
    std::string &type_up = type;
    
    return(type_up);
}

Weapon::Weapon(std::string type_up)
{
    type = type_up;
}

Weapon::~Weapon()
{

}

Weapon::Weapon()
{
    type = "";
}