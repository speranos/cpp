#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brian.hpp"

class Dog : public Animal
{
	Brain *obj;
	public:
	Dog();
	Dog(Dog &copy);
	~Dog();
	void    makeSound() const;
};

#endif