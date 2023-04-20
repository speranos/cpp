#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	Dog_obj = new Brain();
	std::cout << "Dog const called !" << std::endl;
}

Dog::~Dog()
{
	//Delete Brain
	delete Dog_obj;
	std::cout << "Dog destr called !" << std::endl;
}

void    Dog::makeSound() const
{
	std::cout << "Dog say Bark !" << std::endl;
}

Dog::Dog(Dog &copy)
{
	*this = copy;
}

Dog	&Dog::operator= (const Dog &copy)
{
	Brain *deep_copy;
	deep_copy = new Brain(*copy.Dog_obj);
	delete Dog_obj;
	Dog_obj = deep_copy;
	type = copy.type;
	return(*this);
}