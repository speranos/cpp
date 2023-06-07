#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T>
class MutantStack : public std::stack<int>
{
public:
	MutantStack(void) {};
	typedef MutantStack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return(c.begin());
	}
	iterator end()
	{
		return(c.end());
	}
};


#endif