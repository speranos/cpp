#include "PmergeMe.hpp"

bool	ft_isdigit(char *str)
{
	int	i = 0;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return(false);
		i++;
	}
	return(true);
}

void	ft_add(int	ac, char **av, vector &my_vec)
{
	int	i = 1;
	while (i < ac)
	{
		if(!ft_isdigit(av[i]))
			throw std::invalid_argument("ERROR: Positive integer only.");
		my_vec.push_back(atoi(av[i++]));
		//push to second count;
	}
	print_vec(my_vec);
}

void	print_vec(vector &my_vec)
{
	vec_iterator	iter = my_vec.begin();
	std::cout << "Befor:";
	while (iter != my_vec.end())
	{
		std::cout << " " << *iter;
		iter++;
	}
	std::cout << std::endl;
}