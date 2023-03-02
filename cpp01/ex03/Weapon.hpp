/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:45:03 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:45:03 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string type;
public:
	Weapon(std::string type_up);
	Weapon();
	~Weapon();
	void	setType(std::string	type_up);
	const std::string	&getType();
};

#endif