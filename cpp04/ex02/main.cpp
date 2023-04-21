#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Cat	obj_cat;
	Cat	obj_cat0;

	obj_cat0 = obj_cat;

	const Animal* j = new Dog();
	const Animal* p = new Cat();

	delete j;
	delete p;
	return(0);
}