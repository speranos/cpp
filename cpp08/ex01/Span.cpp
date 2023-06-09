/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:27:01 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/09 21:29:44 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	size = 0;
	std::cout << "Default const called" << std::endl;
}

Span::Span(unsigned int N)
{
	size = N;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
	stack.clear();
	std::cout << "Dest called" << std::endl;
}

Span& Span::operator= (const Span &copy)
{
	size = copy.size;
	size_t	i = 0;
	stack.clear();
	while(i < copy.stack.size())
		stack.push_back(copy.stack[i++]);
	return(*this);
}

void	Span::addNumber(unsigned int N)
{
	stack.push_back(N);
	if(stack.size() > size)
		throw std::invalid_argument("You reached the size limit !!!");
}

int	Span::longestSpan()
{
	if(stack.size() < 2)
		throw std::invalid_argument("Add More number to countainer !!!");

	iterator iter_max;
	iterator iter_min;

	iter_min = std::min_element(stack.begin(), stack.end());
	iter_max = std::max_element(stack.begin(), stack.end());

	int	ret = *iter_max - *iter_min;

	return(ret);
}

unsigned int	Span::shortestSpan()
{
	if(stack.size() < 2)
		throw std::invalid_argument("Add More number to countainer !!!");
	
	std::sort(stack.begin(), stack.end());

	iterator		i = stack.begin();
	unsigned int	ret;
	iterator		last;

	last = i++;
	ret = *i - *last;

	while(i != stack.end())
	{
		if(*i - *last < ret)
			ret = *i - *last;
		last = i++;
	}

	return(ret);
}

void	Span::add_range(iterator start, iterator end)
{
	std::vector<unsigned int> get_size(start, end);
	
	if(get_size.size() > (size - stack.size()))
		throw std::invalid_argument("You reached the size limit !!!");

	stack.insert(stack.end(), start, end);
}
