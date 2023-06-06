#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    unsigned int    size;
    std::vector<unsigned int> stack;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &copy);
    ~Span();
    Span &operator=(const Span &copy);
    void    addNumber(unsigned int N);
    unsigned int shortestSpan();
    int longestSpan();
};

#endif