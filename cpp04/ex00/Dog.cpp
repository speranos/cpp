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