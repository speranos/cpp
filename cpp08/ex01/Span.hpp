/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:26:54 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/09 21:35:20 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<unsigned int>::iterator iterator;
class Span
{
	unsigned int				size;
	std::vector<unsigned int>	stack;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &copy);
	~Span();
	Span &operator=(const Span &copy);
	void			addNumber(unsigned int N);
	unsigned int	shortestSpan();
	int				longestSpan();
	void			add_range(iterator start, iterator end);

};

#endif