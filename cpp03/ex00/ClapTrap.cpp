/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:07:57 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/14 21:56:40 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default const get called !" << std::endl;
	name = "Default";
	hits_point = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "Copy const get called !" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name_up)
{
	std::cout << "Name set Const get called !" << std::endl;
	name = name_up;
	hits_point = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(hits_point && energy_points)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "ClapTrap " << name << " has no energy points to attack"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > hits_point)
	{
		hits_point = 0;
		std::cout << "ClapTrap can’t do anythin !" << std::endl;
	}
	else
	{
		hits_point -= amount;
		std::cout << "ClapTrap " << name << " has taken " << amount << " in attack damge!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hits_point && energy_points)
	{
		std::cout << "ClapTrap " << name << " gets " << amount << " hit points back!" << std::endl;
		hits_point += amount;
		energy_points--;
	}
	else
		std::cout << "ClapTrap " << name << " has no enery points to get repaired"<< std::endl;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	name = copy.name;
	hits_point = copy.hits_point;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return(*this);
}