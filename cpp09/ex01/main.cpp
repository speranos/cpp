/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 03:57:28 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/15 03:57:29 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	ft_size(char *str)
{
	size_t i = 0;
	while (str[i])
		i++;
	return(i);
}

int main(int ac, char **av)
{
	try
	{
		stack	my_stack;
		int		i = 0;
		if(ac == 2 && ft_size(av[1]))
			while(av[1][i])
				ft_add(av[1][i++], my_stack);
		else
		{
			std::cout << "Error: More or less argument required." << std::endl;
			return(0);
		}
		if(my_stack.size())
			std::cout << my_stack.top() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}