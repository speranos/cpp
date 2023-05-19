#include "iter.hpp"

int	main()
{
	char str[] = "aphelios";
	iter(str, 8, print<char>);
	std::cout << std::endl;
	int	stack[] = {1,2,3};
	iter(stack, 3, print<int>);
}