#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class AFrom;

class Intern
{
public:
	AForm *makeform(std::string form_name, std::string target);
	typedef void	(Intern::*ptr_to_fnc)();
	AForm *PresidentialPardon(std::string form_name, std::string target);
	AForm *RobotomyRequest(std::string form_name, std::string target);
	AForm *ShrubberyCreation(std::string form_name, std::string target);
};



#endif