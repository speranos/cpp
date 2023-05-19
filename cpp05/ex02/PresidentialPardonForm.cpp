#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 0, 0)
{
	target = "Default";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm dest Called" << std::endl;
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
	if(get_sign() && executor.getGrade() <= get_sign_grade())
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw AForm::AFormGradeTooHighException();	
}