#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	Brain *Dog_obj;
	public:
	Dog();
	Dog(Dog &copy);
	Dog	&operator= (const Dog &copy);
	~Dog();
	void    makeSound() const;
};

#endif