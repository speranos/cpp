/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:29:09 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/03 13:29:09 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	cat_obj = new Brain();
	std::cout << "Cat const called !" << std::endl;
}

Cat::~Cat()
{
	delete cat_obj;
	std::cout << "Cat destr called !" << std::endl;
}

Cat::Cat(Cat &copy)
{
	*this = copy;
}

Cat	&Cat::operator= (const Cat &copy)
{
	type = copy.type;
	Brain *deep_copy;
	deep_copy = new Brain(*copy.cat_obj);
	delete cat_obj;
	this->cat_obj = deep_copy;
	return(*this);
}

void    Cat::makeSound() const
{
	std::cout << "Cat say purrs !" << std::endl;
}
