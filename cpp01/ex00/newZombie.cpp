/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:39:25 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 17:00:56 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newzombie(std::string name)
{
	Zombie *new_zombie;

	new_zombie = new Zombie(name);
	return(new_zombie);
}