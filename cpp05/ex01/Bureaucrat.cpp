#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name_up, int grade_up) : name(name_up)
{
	if(grade_up <= 0)
		throw GradeTooHighException();
	else if(grade_up > 150)
		throw GradeTooLowException();
	grade = grade_up;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destr Called !" << std::endl;
}

const char	*Bureaucrat::GradeTooHighException()
{
	return("GradeTooHighException !");
}

const char	*Bureaucrat::GradeTooLowException()
{
	return("GradeTooLowException !");
}
 
const std::string	Bureaucrat::getName()
{
	return name;
}

int	Bureaucrat::getGrade()
{
	return grade;
}

std::ostream &operator<< (std::ostream  &stream, Bureaucrat &obj)
{
	stream << "Bureaucrat " << obj.getName() << " grade is " << obj.getGrade();
	return(stream);
}

void	Bureaucrat::increment()
{
	grade--;
	if(grade <= 0)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::decrement()
{
	grade++;
	if(grade <= 0)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
}