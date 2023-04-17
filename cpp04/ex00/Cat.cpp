#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat const called !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destr called !" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Cat say purrs !" << std::endl;
}