/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:57:08 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 00:57:08 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat const called !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destr called !" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Cat say purrs !" << std::endl;
}
