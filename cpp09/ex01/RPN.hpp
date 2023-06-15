/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 03:57:44 by aoueldma          #+#    #+#             */
/*   Updated: 2023/06/15 03:57:44 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP


#include <stack>
#include <iostream>

typedef std::stack<int> stack;

void	do_math(size_t index, stack &my_stack);
int	    isoperator(char c, stack &my_stack);
int	    ctoi(char c);
void	ft_add(char c, stack &my_stack);
int		ft_size(char *str);
#endif