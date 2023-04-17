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


class WrongAnimal
{
	protected:
	std::string type;
    public:
    WrongAnimal();
    WrongAnimal(Animal &copy);
    ~WrongAnimal();
    std::string getType() const;
    WrongAnimal	&operator= (const Animal &copy);
    void    makeSound() const;
};

//implement worngCat tooo without virtual
#endif