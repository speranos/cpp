/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:25:41 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/08 15:25:41 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void    easyfind(T &cont, int num)
{
	std::vector<int>::iterator ret;
	ret = std::find(cont.begin(), cont.end(), num);

	if(ret == cont.end())
		throw std::invalid_argument("num not fouand int this range !!!");
	else
		std::cout << *ret << " belongs to this range" << std::endl;
}

#endif