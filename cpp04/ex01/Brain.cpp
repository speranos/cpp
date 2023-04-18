#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Const Called !" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destr Called !" << std::endl;
}

Brain::Brain(Brain &copy)
{
    *this = copy;
}

Brain	&Brain::operator= (const Brain &copy)
{
    int i = -1;
    while(i++ < 100)
        idea[i] = copy.idea[i];
    std::cout << i << std::endl;
	return(*this);
}