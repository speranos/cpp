/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:08:42 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/15 04:09:59 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if(ac == 2)
	{
		BitcoinExchange map_input;
		cont			map_csv;
		if(!reading_file(map_csv))
			return(0);
		reading_input(map_csv, map_input, av[1]);
	}
	else
	{
		std::cout << "Error: Could not open file." << std::endl;
		return(0);
	}
}