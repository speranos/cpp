/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:17:48 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/31 09:17:48 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		unsigned long i = 0;
		std::string str = "amine";
		Array<char> test(str.length());
		while(i < str.length())
		{
			test[i] = str[i];
			i++;
		}
		std::cout << test[6] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}