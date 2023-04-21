#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	const std::string	name;
	int					grade;
public:
	Bureaucrat(std::string name_up, int grade_up);
	const char*	GradeTooHighException();
	const char*	GradeTooLowException();
	const std::string	getName();
	int	getGrade();
	~Bureaucrat();
	void	increment();
	void	decrement();
};
std::ostream &operator<< (std::ostream  &stream, Bureaucrat &obj);
#endif