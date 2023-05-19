#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	T *array;
	//check attribut
public:
	Array()
	{
		T *array = new T;
	}

	Array(unsigned int n)
	{
		array = new T[n];
	}

	Array(Array &copy)
	{
		*this = copy;
	}

	Array	&operator=(Array &copy)
	{
		int	i = 0;
		delete array;
		array = new T[copy.size()];
		while(i < copy.size())
		{
			array[i] = copy.size[i];
			i++;
 		}
		return(*this);
	}

	T	&operator[](int i)
	{
		if(i < 0 ||  i > size())
			throw std::exception();
		else
			return(array[i]);
	}

	int	size()
	{
		int	i = 0;
		while(array[i])
			i++;
		return(i);
	}

	~Array()
	{
		std::cout << "Dest get called" << std::endl;
	}
};

#endif