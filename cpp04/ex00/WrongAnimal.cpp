/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:57:05 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 00:57:05 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal const called !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destr called !" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    *this = copy;
}

WrongAnimal	&WrongAnimal::operator= (const WrongAnimal &copy)
{
    type = copy.type;
	return(*this);
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal cant make a specef sound !" << std::endl;
}