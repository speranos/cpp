#include "Weapon.hpp"

Weapon::setType(std::string type_up)
{
    type = type_up;
}

std::string &Weapon::getType()
{
    std::string &type_up;

    type_up = type;
    return(type_up);
}