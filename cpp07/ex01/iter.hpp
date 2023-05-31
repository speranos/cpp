/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 00:13:32 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/31 03:48:55 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void	print(T &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	iter(T *array, size_t lenght, void(*func)(T& element))
{
	size_t	i;

	i = 0;
	while (i < lenght)
	{
		func(array[i++]);
	}
}

#endif