/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:45:06 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:45:06 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string type_up)
{
    type = type_up;
}

const std::string &Weapon::getType()
{
    const std::string &type_up = type;
    
    return(type_up);
}

Weapon::Weapon(std::string type_up)
{
    type = type_up;
}

Weapon::~Weapon()
{

}

Weapon::Weapon()
{
    type = "";
}