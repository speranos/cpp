/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:45:15 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:45:15 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
	std::string name;
	Weapon	&humana_weapon;
	
	public:
	HumanA(std::string name_up, Weapon	&humana_weapon_up);
	HumanA();
	~HumanA();
	void	attack();
};

#endif