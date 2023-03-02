/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:26:52 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:28:55 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *test;
	int		i;
	int		N;

	i = 0;
	N = 5;
	test = zombieHorde(N, "kaisa");
	if(test)
	{
		while(i < N)
			test[i++].announce();
		std::cout << std::endl;
		delete[] test;
	}
}
