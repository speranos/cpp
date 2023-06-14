#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac >= 2)
	{
		try
		{
			vector	my_vec;
			list	my_list;
			ft_add(ac, av, my_vec);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "ERROR: Not enoughe argument." << std::endl;
	return(0);
}

//pussshh to seconddd cont 
//implement sorting algo
//specify the use of the tow cont
//searche more about time complexity
