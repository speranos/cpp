#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	std::string idea[100];
	public:
	Brain();
	Brain(Brain &copy);
	Brain	&operator= (const Brain &copy);
	~Brain();
};

#endif