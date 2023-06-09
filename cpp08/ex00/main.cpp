/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:25:45 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/08 15:25:45 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> cont;

		int i = 0;
		while(i < 10)
			cont.push_back(i++);
		easyfind(cont, 2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}