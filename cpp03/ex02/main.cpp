/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:53:51 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/14 17:52:34 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap a("A");
	ClapTrap b("B");

	ClapTrap c(a);
	ScavTrap d;

	ClapTrap e("switch");
	ScavTrap f("call");
	FragTrap r;

	e = f;


	a.attack("B");
	b.takeDamage(10);
	c.attack("B");
	d.takeDamage(20);
	a.beRepaired(10);
	b.takeDamage(20);
	
	e.attack("F");
	f.attack("E");
	r.attack("OOP");
	r.beRepaired(70);
	r.takeDamage(890);
	r.highFivesGuys();
	return (0);
}
