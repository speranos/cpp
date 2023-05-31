/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 00:13:28 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/31 03:49:06 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	char str[] = "aphelios";
	iter(str, 8, print<char>);
	std::cout << std::endl;
	int	stack[] = {1,2,3};
	iter(stack, 3, print<int>);
	
	return 0;

}