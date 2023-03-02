/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:18:42 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 21:18:42 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl input;

	if(ac != 2)
	{
		std::cout << "More or less args required !!!" << std::endl;
		return(0);
	}

	input.complain(av[1]);
}