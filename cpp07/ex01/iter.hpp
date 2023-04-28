#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	print(T element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	iter(T *array, size_t lenght, void(*print)(T element))
{
	size_t	i = 0;

	while (i < lenght)
	{
		print(array[i++]);
	}
}

#endif