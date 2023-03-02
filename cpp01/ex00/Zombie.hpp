/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:39:02 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 16:39:03 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>


class   Zombie
{
	std::string name;
	public:
	~Zombie();
	Zombie(std::string name);
	void    announce(void);
};

void	randomChump(std::string name);
Zombie	*newzombie(std::string name);

#endif