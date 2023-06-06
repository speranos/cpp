#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> cont;

		int i = 0;
		while(i < 10)
			cont.push_back(i++);
		easyfind(cont, 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// auto a = cont.begin();
	// std::iterator()

}