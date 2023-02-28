#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl input;

	if(ac != 2)
	{
		std::cout << std::endl;
		return(0);
	}

	input.complain(av[1]);
}