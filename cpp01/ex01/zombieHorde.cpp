/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:27:50 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 20:27:50 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	if(N > 0)
	{
		Zombie	*zombieHorde;
		int		i = 0;

		zombieHorde  = new Zombie[N];
		while(i < N)
		{
			zombieHorde[i].set(name);
			i++;
		}
		return(zombieHorde);
	}
	return(NULL);
}