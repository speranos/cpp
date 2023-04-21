#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal *meta[10];
	int	i = 0;

	while(i < 5)
		meta[i++] = new Cat();
	while(i < 10)
		meta[i++] = new Dog();
	Dog	obj_Dog;
	Dog	obj_Dog0;

	obj_Dog0 = obj_Dog;

	Cat	obj_cat;
	Cat	obj_cat0;

	obj_cat0 = obj_cat;

	const Animal* j = new Dog();
	const Animal* p = new Cat();
	delete j;
	delete p;
	return(0);
}