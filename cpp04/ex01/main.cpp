#include "Cat.hpp"
#include "Dog.hpp"


int main(void)
{
	std::string str;
	Animal *meta[10];
	int	i = 0;

	while(i < 5)
		meta[i++] = new Cat();
	while(i < 10)
		meta[i++] = new Dog();
	Cat obj_cat;
	Cat obj_cat0(obj_cat);

	obj_cat0 = obj_cat;

	return 0;
}