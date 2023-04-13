/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 02:25:04 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/13 02:25:04 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("A");
	ClapTrap b("B");

	ClapTrap c(a);
	ScavTrap d;

	ClapTrap e("switch");
	ScavTrap f("call");

	e = f;


	a.attack("B");
	b.takeDamage(10);
	c.attack("B");
	d.takeDamage(20);
	a.beRepaired(10);
	b.takeDamage(20);
	
	e.attack("F");
	f.attack("E");
	return (0);
}
