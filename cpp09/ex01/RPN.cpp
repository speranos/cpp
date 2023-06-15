/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 03:58:03 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/15 03:58:03 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	do_math(size_t index, stack &my_stack)
{
	int	current_num = my_stack.top();
	my_stack.pop();
	int	previous_num = my_stack.top();
	my_stack.pop();
	switch (index)
	{
	case 0:
		my_stack.push(previous_num + current_num);
		break;
	case 1:
		my_stack.push(previous_num - current_num);
		break;
	case 2:
		if(current_num > 0)
			my_stack.push(previous_num / current_num);
		else
			throw std::invalid_argument("ERROR: Cant devide by 0");
		break;
	case 3:
		my_stack.push(previous_num * current_num);
		break;
	}
}

int	isoperator(char c, stack &my_stack)
{
	std::string operators = "+-/*";
	size_t		i = 0;
	bool		find = false;

	while(i < operators.size())
	{
		if(operators[i] == c && my_stack.size() > 1)
		{
			do_math(i,my_stack);
			find = true;
			break;
		}
		i++;
	}
	if(!find)
		return(0);
	return(1);
}

int	ctoi(char c)
{
	return(c - 48);
}

void	ft_add(char c, stack &my_stack)
{
	if(c <= 32)
		return;
	if(isdigit(c))
		my_stack.push(ctoi(c));
	else if(!isoperator(c, my_stack))
		throw std::invalid_argument("ERROR: Invalide operator. ");
}


