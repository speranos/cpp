#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

typedef std::vector<int>	vector;
typedef vector::iterator	vec_iterator;
typedef std::list<int>		list;

void	ft_add(int	ac, char **av, vector &my_vec);
bool	ft_isdigit(char *str);
void	print_vec(vector &my_vec);






#endif