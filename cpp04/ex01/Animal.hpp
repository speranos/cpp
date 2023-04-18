#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
	std::string type;
	public:
	Animal();
	Animal(Animal &copy);
	virtual ~Animal();
	virtual std::string getType() const;
	Animal	&operator= (const Animal &copy);
	virtual  void    makeSound() const;
};

#endif