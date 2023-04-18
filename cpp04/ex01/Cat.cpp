/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:57:08 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 02:19:53 by aoueldma         ###   ########.fr       */
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
    std::cout << "Cat destr called !" << std::endl;
}

Cat::Cat(Cat &copy)
{
    *this = copy;
}

Cat	&Cat::operator= (const Cat &copy)
{
    type = copy.type;
    cat_obj = copy.cat_obj;
	return(*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat say purrs !" << std::endl;
}
