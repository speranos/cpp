#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 0, 0)
{
	target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string &target_up) : AForm(target_up, 25, 5)
{
	target = target_up;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator= (PresidentialPardonForm &copy)
{
	target = copy.target;
    return(*this);
}

void PresidentialPardonForm::ft_execute(Bureaucrat const &executor) const
{
    (void)executor;
}