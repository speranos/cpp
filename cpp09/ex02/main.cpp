#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac >= 2)
	{
		try
		{
			vector	my_vec;
			deque	my_deq;

			ft_add_vector(ac, av, my_vec, my_deq);
			ft_deq_insertion(my_deq);
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
