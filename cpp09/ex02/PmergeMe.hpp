#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <utility>
#include <algorithm>
#include <ctime>

typedef std::vector<int>					vector;
typedef std::vector<std::pair<int, int> >	vector_pair;
typedef std::deque<int>						deque;
typedef std::deque<std::pair<int, int> >	deque_pair;


void	ft_add_vector(int	ac, char **av, vector &my_vec, deque &my_deq);
bool	ft_isdigit(char *str);
void	print_vec_befor(vector &my_vec);
void	ft_insertion(vector &my_vec);
void	ft_insert_merge(vector &my_vec, vector_pair &vec_pair);
void	print_deq(deque &my_deq);
void	ft_deq_insertion(deque &my_deq);
void	ft_insert_merge_deq(deque &my_deq, deque_pair &vec_pair);
void	print_vec_after(vector &my_vec);






#endif