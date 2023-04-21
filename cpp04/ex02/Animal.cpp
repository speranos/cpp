#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal const called !" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destr called !" << std::endl;
}

Animal::Animal(Animal &copy)
{
    *this = copy;
}

Animal	&Animal::operator= (const Animal &copy)
{
    type = copy.type;
	return(*this);
}

std::string Animal::getType() const
{
    return(type);
}

void    Animal::makeSound() const
{
    std::cout << "Animal cant make a specef sound !" << std::endl;
}


