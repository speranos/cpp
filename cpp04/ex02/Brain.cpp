/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:53:44 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/03 15:53:44 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Const Called !" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destr Called !" << std::endl;
}

Brain::Brain(Brain &copy)
{
	*this = copy;
}

Brain	&Brain::operator= (const Brain &copy)
{
	int i = -1;
	while(i++ < 100)
		idea[i] = copy.idea[i];
	return(*this);
}