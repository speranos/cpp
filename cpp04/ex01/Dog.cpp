/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:58:13 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 02:33:44 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    Dog_obj = new Brain();
    std::cout << "Dog const called !" << std::endl;
}

Dog::~Dog()
{
    //Delete Brain
    std::cout << "Dog destr called !" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Dog say Bark !" << std::endl;
}

Dog::Dog(Dog &copy)
{
    *this = copy;
}

Dog	&Dog::operator= (const Dog &copy)
{
    type = copy.type;
    Dog_obj = copy.Dog_obj;
	return(*this);
}