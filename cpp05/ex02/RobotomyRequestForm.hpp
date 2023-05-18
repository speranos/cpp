#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;
class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string &target_up);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &copy);
	RobotomyRequestForm &operator =(RobotomyRequestForm &copy);
	void	ft_execute(Bureaucrat const & executor) const;
};

#endif