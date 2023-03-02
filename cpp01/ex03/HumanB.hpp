/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:45:12 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:45:12 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon	*humanb_weapon;

	public:
	HumanB(std::string name_up);
	~HumanB();
	HumanB();
	void    attack();
    void    setWeapon(Weapon &humanb_weapon_up);
};

#endif