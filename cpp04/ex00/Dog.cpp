#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog const called !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destr called !" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Dog say Bark !" << std::endl;
}