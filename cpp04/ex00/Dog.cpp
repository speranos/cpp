/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:58:13 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 00:58:13 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog const called !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destr called !" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Dog say Bark !" << std::endl;
}