#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brian.hpp"
class Cat : public Animal
{
	Brian *obj;
	public:
	Cat();
	Cat(Cat &copy);
	~Cat();
	void    makeSound() const;
};

#endif