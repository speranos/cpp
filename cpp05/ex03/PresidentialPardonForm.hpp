#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string &target_up);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &copy);
	PresidentialPardonForm &operator =(PresidentialPardonForm &copy);
	void	ft_execute(Bureaucrat const & executor) const;
};

#endif