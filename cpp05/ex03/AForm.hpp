#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	const std::string name;
	bool sign;
	const int sign_grade;
	const int execute;
public:
	class AFormGradeTooHighException : public std::exception
	{
	public:

		const char *what() const throw()
		{
			return("GradeTooHighException !");
		}
	};

	class AFormGradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return("GradeTooLowException !");
		}
	};

	AForm();
	~AForm();
	AForm(AForm &copy);
	AForm	&operator=(AForm &copy);
	AForm(std::string name_up, int grade_up, int execute_up);
	void	beSigned(Bureaucrat &obj);
	const std::string	get_name() const;
	int	get_sign_grade() const;
	int	get_execute() const;
	bool	get_sign() const;
	virtual void	ft_execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<< (std::ostream  &stream, AForm &obj);
#endif