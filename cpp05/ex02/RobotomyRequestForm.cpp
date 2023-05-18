#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 0, 0)
{
	target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target_up) : AForm(target_up, 72, 45)
{
	target = target_up;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (RobotomyRequestForm &copy)
{
	target = copy.target;
	return(*this);
}

void RobotomyRequestForm::ft_execute(Bureaucrat const &executor) const
{
	(void)executor;
}