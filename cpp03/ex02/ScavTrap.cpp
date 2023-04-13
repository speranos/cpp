/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:53:16 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/13 20:53:16 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "scav Const called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scav Destructor Called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	std::cout << "ScavTrap Copy const get called !" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name_up)
{
	std::cout << "Scav Name set Const get called !" << std::endl;
    name = name_up;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(hits_point && energy_points)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "ScavTrap " << name << " has no enery points to attack"<< std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &copy)
{
	std::cout << "Scav Copy assignment operator called" << std::endl;

	name = copy.name;
	hits_point = copy.hits_point;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return(*this);
}