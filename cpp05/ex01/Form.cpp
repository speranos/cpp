#include "Form.hpp"

const char	*Form::FormGradeTooHighException()
{
	return("GradeTooHighException !");
}

const char	*Form::FormGradeTooLowException()
{
	return("GradeTooLowException !");
}

void	Form::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() <= sign_grade)
		sign = true;
	// else if(obj.getGrade() <= sign_grade)
	// 	sign = true;

}

std::ostream &operator<< (std::ostream  &stream, Form &obj)
{
	(void)obj;
	//stream << "Form " << obj.getName() << " grade is " << obj.getGrade();
	return(stream);
}

Form::Form() : name("default") , sign_grade(1) , execute(1)
{
	sign = false;
	std::cout << "const called !" << std::endl;
}

Form::Form(std::string name_up, int grade_up, int execute_up) : name(name_up), sign_grade(grade_up), execute(execute_up)
{
	if(sign_grade <= 0)
		throw FormGradeTooHighException();
	else if(sign_grade > 150)
		throw FormGradeTooLowException();
	if(execute <= 0)
		throw FormGradeTooHighException();
	else if(execute > 150)
		throw FormGradeTooLowException();
	sign = false;
}

Form::~Form()
{
	std::cout << "Dest called !" << std::endl;
}