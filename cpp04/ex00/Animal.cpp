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