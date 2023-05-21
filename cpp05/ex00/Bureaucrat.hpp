#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
	Bureaucrat(std::string name_up, int grade_up);
	~Bureaucrat();
	Bureaucrat(Bureaucrat &copy);
	Bureaucrat &operator= (Bureaucrat &copy);
	const std::string	getName();
	int	getGrade();
	void	increment();
	void	decrement();
};
std::ostream &operator<< (std::ostream  &stream, Bureaucrat &obj);
#endif