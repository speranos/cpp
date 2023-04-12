/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:54:12 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/12 17:54:12 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(ScavTrap &copy);
    ScavTrap(std::string name_up);
    ~ScavTrap();
    ScavTrap	&operator= (const ScavTrap &copy);
    void    guardGate();
    void attack(const std::string& target);
};


#endif