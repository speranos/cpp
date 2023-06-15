/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:15:13 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/15 04:19:43 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if(i == 0)
		return(false);
	return(true);
}

void	ft_add_vector(int	ac, char **av, vector &my_vec, deque &my_deq)
{
	int	i = 1;
	while (i < ac)
	{
		if(!ft_isdigit(av[i]))
			throw std::invalid_argument("ERROR: Positive integer only.");
		my_vec.push_back(atoi(av[i]));
		my_deq.push_back(atoi(av[i]));
		i++;
	}
	print_vec_befor(my_vec);
	ft_insertion(my_vec);
}

void	print_vec_befor(vector &my_vec)
{
	vector::iterator	iter = my_vec.begin();
	std::cout << "Befor:";
	while (iter != my_vec.end())
	{
		std::cout << " " << *iter;
		iter++;
	}
	std::cout << std::endl;
}

void	print_vec_after(vector &my_vec)
{
	vector::iterator	iter = my_vec.begin();
	std::cout << "after:";
	while (iter != my_vec.end())
	{
		std::cout << " " << *iter;
		iter++;
	}
	std::cout << std::endl;
}

void	ft_insertion(vector &my_vec)
{
	vector_pair			vec_pair;
	vector::iterator	iter = my_vec.begin();
	int				small = 0;
	int				big = 0;
	clock_t			start = clock();

	while (iter != my_vec.end())
	{
		if((iter + 1) != my_vec.end())
		{
			if(*iter < *(iter + 1))
			{
				small = *iter;
				big  = *(iter + 1);
			}
			else
			{
				small = *(iter + 1);
				big = *iter;
			}
			vec_pair.push_back(std::make_pair(small, big));
			iter += 2;
		}
		else
			break;
	}
	ft_insert_merge(my_vec, vec_pair);
	clock_t			end = clock();
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << my_vec.size() << " elements with std::vector : " << duration << std::endl;
}

void	ft_insert_merge(vector &my_vec, vector_pair &vec_pair)
{
	vector					final_vec;
	vector_pair::iterator	iter = vec_pair.begin();
	std::pair<int, int>		pr;
	while (iter != vec_pair.end())
	{
		pr = *iter;
		final_vec.push_back(pr.first);
		iter++;
	}
	std::sort(final_vec.begin(), final_vec.end());
	iter = vec_pair.begin();
	while (iter != vec_pair.end())
	{
		pr = *iter;
		final_vec.insert(std::lower_bound(final_vec.begin(), final_vec.end(), pr.second), pr.second);
		iter++;
	}
	if(my_vec.size() % 2)
		final_vec.insert(std::lower_bound(final_vec.begin(), final_vec.end(), *(--my_vec.end())), *(--my_vec.end()));
	print_vec_after(final_vec);
}

///////////////////////////////////////deq

void	ft_deq_insertion(deque &my_deq)
{
	deque_pair			vec_pair;
	deque::iterator	iter = my_deq.begin();
	int				small = 0;
	int				big = 0;
	clock_t			start = clock();

	while (iter != my_deq.end())
	{
		if((iter + 1) != my_deq.end())
		{
			if(*iter < *(iter + 1))
			{
				small = *iter;
				big  = *(iter + 1);
			}
			else
			{
				small = *(iter + 1);
				big = *iter;
			}
			vec_pair.push_back(std::make_pair(small, big));
			iter += 2;
		}
		else
			break;
	}
	ft_insert_merge_deq(my_deq, vec_pair);
	clock_t			end = clock();
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << my_deq.size() << " elements with std::deque : " << duration << std::endl;
}

void	ft_insert_merge_deq(deque &my_deq, deque_pair &vec_pair)
{
	deque					final_vec;
	deque_pair::iterator	iter = vec_pair.begin();
	std::pair<int, int>		pr;
	while (iter != vec_pair.end())
	{
		pr = *iter;
		final_vec.push_back(pr.first);
		iter++;
	}
	std::sort(final_vec.begin(), final_vec.end());
	iter = vec_pair.begin();
	while (iter != vec_pair.end())
	{
		pr = *iter;
		final_vec.insert(std::lower_bound(final_vec.begin(), final_vec.end(), pr.second), pr.second);
		iter++;
	}
	if(my_deq.size() % 2)
		final_vec.insert(std::lower_bound(final_vec.begin(), final_vec.end(), *(--my_deq.end())), *(--my_deq.end()));
}