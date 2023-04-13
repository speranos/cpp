/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:53:01 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/13 20:53:01 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Frag Const called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Destructor Called!" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	std::cout << "FragTrap Copy const get called !" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name_up)
{
	std::cout << "Frag Name set Const get called !" << std::endl;
    name = name_up;
}

FragTrap &FragTrap::operator= (const FragTrap &copy)
{
	std::cout << "Frag Copy assignment operator called" << std::endl;

	name = copy.name;
	hits_point = copy.hits_point;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return(*this);
}

void    highFivesGuys()
{
    std::cout << "Great work! You nailed it! Let's celebrate with a high five!" << std::endl;
}