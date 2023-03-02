/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:27:38 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:27:38 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << "Zombie: " << name <<" has been created" << std::endl;
}

void	Zombie::set(std::string name_up)
{
    name = name_up;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombies: " << name << " has been killed" << std::endl;
}

Zombie::Zombie(void)
{
    name = "default";
}