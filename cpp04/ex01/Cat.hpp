#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	Brain *cat_obj;
	public:
	Cat();
	Cat(Cat &copy);
	~Cat();
	Cat	&operator= (const Cat &copy);
	void    makeSound() const;
};

#endif