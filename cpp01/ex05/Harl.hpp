/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:13:53 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 21:13:53 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
	void	debug();
	void	info();
	void	warning();
	void	error();
	public:
	void	complain(std::string level);
	typedef void	(Harl::*ptr_to_fnc)();
	Harl();
	~Harl();
};

#endif