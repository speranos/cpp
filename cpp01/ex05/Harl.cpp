/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:13:50 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 21:13:50 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
	Harl	input;
	size_t	i = 0;

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr_to_fnc arr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while(i <= 3 && level != levels[i])
		i++;
	while(i <= 3)
	{
		(input.*arr[i])();
		return;
	}
	std::cout << "cmmd not fouand !!!" << std::endl;

}

Harl::Harl()
{

}

Harl::~Harl()
{

}