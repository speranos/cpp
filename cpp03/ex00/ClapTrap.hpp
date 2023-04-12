/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:07:52 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/12 16:21:02 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	std::string		name;
	unsigned int	hits_point;
	unsigned int	energy_points;
	unsigned int	attack_damage;
	public:
	ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap	&operator= (const ClapTrap &copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif