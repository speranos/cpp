/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:44:57 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:48:43 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("Leopard 2A7A1");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("K2 Black Panther");
        bob.attack();
    }
    {
        Weapon club = Weapon("M1A2 SEP");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Armata");
        jim.attack();
    }
return 0;
}