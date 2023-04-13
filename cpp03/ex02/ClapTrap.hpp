/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:53:36 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/13 20:53:37 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
	std::string		name;
	unsigned int	hits_point;
	unsigned int	energy_points;
	unsigned int	attack_damage;

	public:
	ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap(std::string name_up);
	~ClapTrap();
	ClapTrap	&operator= (const ClapTrap &copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif