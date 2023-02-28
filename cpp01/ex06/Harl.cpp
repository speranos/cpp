#include "Harl.hpp"

void    Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void    Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
	Harl		input;
	size_t		i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while(i <= 3 && level != levels[i])
		i++;
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "I am not sure how tired I am today..." << std::endl;
	}

}

Harl::Harl()
{

}

Harl::~Harl()
{

}