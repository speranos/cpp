/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:17:52 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/31 09:17:52 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	T *array;
	int	size_t;
public:
	Array()
	{
		array = new T;
		size_t = 0;
	}

	Array(unsigned int n)
	{
		array = new T[n];
		size_t += n;
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
		if(i < 0 ||  i >= size())
			throw std::exception();
		else
			return(array[i]);
	}

	int	size()
	{
		return(size_t);
	}

	~Array()
	{
		std::cout << "Dest get called" << std::endl;
	}
};

#endif