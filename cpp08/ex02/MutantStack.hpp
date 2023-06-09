/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:46:24 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/09 21:56:54 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<int>
{
public:
	MutantStack() {};
	MutantStack(MutantStack &copy)
	{
		*this = copy;
	}
	~MutantStack(){};
	MutantStack &operator= (MutantStack &copy)
	{
		this->c = copy.c;
	}

	typedef MutantStack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return(c.begin());
	}
	iterator end()
	{
		return(c.end());
	}

	typedef MutantStack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin()
	{
		return(c.rbegin());
	}
	reverse_iterator rend()
	{
		return(c.rend());
	}
};

#endif