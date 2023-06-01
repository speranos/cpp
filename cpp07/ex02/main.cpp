/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:17:48 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/01 16:11:18 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
void	print(Array<T> &arr, unsigned long len)
{
	unsigned long i = 0;
	while(i < len)
	{
		std::cout << arr[i] << std::endl;
		i++;
	}
}

int main()
{
	try
	{
		unsigned long i = 0;
		std::string str = "amine";
		Array<char> arr_char(str.length());
		while(i < str.length())
		{
			arr_char[i] = str[i];
			i++;
		}
		print(arr_char, i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		unsigned long i = 0;
		int	str[] = {1, 3, 5, 7, 8, 10};
		Array<int> arr_int(6);
		while(i < 6)
		{
			arr_int[i] = str[i];
			i++;
		}
		print(arr_int, i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}