#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string &target_up);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator =(ShrubberyCreationForm &copy);
	void	ft_execute(Bureaucrat const & executor) const;
};

#endif