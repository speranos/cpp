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
	// typedef void(ptr_to_fnc(Harl::*ptr_to_fnc));
	//void	*ptr_to_fnc(void Harl::debug, void Harl::info);
	Harl();
	~Harl();
};
// typedef void	(Harl::*ptr_to_fnc)();

#endif