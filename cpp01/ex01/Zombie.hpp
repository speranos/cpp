/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:27:44 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:27:44 by aoueldma         ###   ########.fr       */
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
	Zombie();
	~Zombie();
	void    announce(void);
	void	set(std::string name_up);
};

Zombie	*zombieHorde( int N, std::string name );
#endif