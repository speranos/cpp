/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:45:30 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:45:30 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack() 
{
    std::cout << name << " attacks with their " << humana_weapon.getType() << std::endl;

}

HumanA::HumanA(std::string name_up, Weapon	&humana_weapon_up) : humana_weapon(humana_weapon_up)
{
    humana_weapon = humana_weapon_up;
    name = name_up;
}

HumanA::~HumanA()
{
    
}