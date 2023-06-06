#include "Span.hpp"

Span::Span()
{
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
	std::cout << "Dest called" << std::endl;
}

Span& Span::operator= (const Span &copy)
{
	size_t	i = 0;
	stack.clear();
	while(i < copy.stack.size())
		stack.push_back(copy.stack[i++]);
	return(*this);
}

void	Span::addNumber(unsigned int N)
{
	std::vector<unsigned int>::iterator	i = stack.begin();
	while(i != stack.end())
	{
		if(*i == N)
			throw std::invalid_argument("Duplication Error !!!");
		else
			i++;
	}
	stack.push_back(N);
	if(stack.size() > size)
		throw std::invalid_argument("You reached the size limit !!!");
}

int	Span::longestSpan()
{
	if(stack.size() < 2)
		throw std::invalid_argument("Add More number to countainer !!!");

	std::vector<unsigned int>::iterator iter_max;
	std::vector<unsigned int>::iterator iter_min;

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

	std::vector<unsigned int>::iterator	i = stack.begin();
	unsigned int	ret;
	std::vector<unsigned int>::iterator	last;

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