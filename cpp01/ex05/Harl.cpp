#include "Harl.hpp"

void    Harl::debug()
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
	std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::complain(std::string level)
{
	Harl	input;
	size_t	i = 0;

	std::string	levels[2] = {"debug", "info"};
	ptr_to_fnc arr[2] = {&Harl::debug, &Harl::info};
	while(level != levels[i] && i <= levels->length())
		i++;
	while(i < 2)
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