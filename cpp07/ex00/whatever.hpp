/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 23:54:41 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/30 23:54:49 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T	tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	min(T x, T y)
{
	if(x < y)
		return x;
	else
		return y;
}

template <typename T>
T	max(T x, T y)
{
    if(x > y)
        return x;
    else
        return y;
}

#endif