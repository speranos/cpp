#include "iter.hpp"

int	main()
{
	//tochange it with std::arrstring !!!!
	char str[] = "aphelios";
	iter(str, 8, print<char>);

	int	stack[] = {1,2,3};
	iter(stack, 3, print<int>);

	//add more test
}