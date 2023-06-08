#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T>
class MutantStack : public std::stack<int>
{
public:
	MutantStack() {};
	MutantStack(MutantStack &copy)
	{
		*this = copy;
	}
	~MutantStack(){};
	MutantStack &operator= (MutantStack &copy)
	{
		this->c = copy.c;
	}

	typedef MutantStack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return(c.begin());
	}
	iterator end()
	{
		return(c.end());
	}

	typedef MutantStack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin()
	{
		return(c.rbegin());
	}
	reverse_iterator rend()
	{
		return(c.rend());
	}
};


#endif