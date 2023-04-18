/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:56:42 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 00:56:42 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat const called !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destr called !" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat say purrs !" << std::endl;
}