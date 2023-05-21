#include "Intern.hpp"

AForm *Intern::PresidentialPardon(std::string form_name, std::string target)
{
	PresidentialPardonForm *obj = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form_name << std::endl;
	return(obj);
}

AForm *Intern::RobotomyRequest(std::string form_name, std::string target)
{
	RobotomyRequestForm *obj = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form_name << std::endl;
	return(obj);
}

AForm *Intern::ShrubberyCreation(std::string form_name, std::string target)
{
	ShrubberyCreationForm *obj = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form_name << std::endl;
	return(obj);
}

AForm *Intern::makeform(std::string form_name, std::string target)
{
	int i = 0;
	std::string arr[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	while(i != 2 && form_name != arr[i])
		i++;
	switch(i)
	{
		case 0:
			return(PresidentialPardon(form_name, target));
			break;
		case 1:
			return(RobotomyRequest(form_name, target));
			break;
		case 2:
			return(ShrubberyCreation(form_name, target));
			break;
		default:
			std::cout << form_name << " cannot found" << std::endl;
	}
	return(NULL);
}

