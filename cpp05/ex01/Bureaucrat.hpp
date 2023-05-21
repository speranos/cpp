#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	const std::string	name;
	int					grade;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return("GradeTooHighException !");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return("GradeTooLowException !");
		}

	};
	Bureaucrat();
	Bureaucrat(Bureaucrat &copy);
	Bureaucrat(std::string name_up, int grade_up);
	~Bureaucrat();
	Bureaucrat	&operator=(Bureaucrat &copy);
	const std::string	getName();
	int	getGrade();
	void	increment();
	void	decrement();
	void	signForm(Form &obj);
};
std::ostream &operator<< (std::ostream  &stream, Bureaucrat &obj);
#endif