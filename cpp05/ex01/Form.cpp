#include "Form.hpp"

Form::Form() : name("default") , sign_grade(0) , execute(0)
{
	sign = false;
	std::cout << "const called !" << std::endl;
}

Form::Form(Form &copy) : name(copy.get_name()), sign_grade(copy.get_sign_grade()), execute(copy.get_execute())
{
	sign = copy.get_sign();
	std::cout << "Copy const called !" << std::endl;
}

Form::Form(std::string name_up, int grade_up, int execute_up) : name(name_up), sign_grade(grade_up), execute(execute_up)
{
	if(sign_grade <= 0)
		throw Form::FormGradeTooHighException();
	else if(sign_grade > 150)
		throw Form::FormGradeTooLowException();
	if(execute <= 0)
		throw Form::FormGradeTooHighException();
	else if(execute > 150)
		throw Form::FormGradeTooLowException();
	sign = false;
}

Form::~Form()
{
	std::cout << "Dest called !" << std::endl;
}

Form	&Form::operator=(Form &copy)
{
	const_cast<std::string&>(name) = copy.get_name();
	const_cast<int&>(sign_grade) = copy.get_sign_grade();
	const_cast<int&>(execute) = copy.get_execute();
	sign = copy.get_sign();
	return(*this);
}

void	Form::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() <= get_sign_grade())
		sign = true;
	else
		throw Form::FormGradeTooLowException();
}

std::ostream &operator<< (std::ostream  &stream, Form &obj)
{
	(void)obj;
	stream << obj.get_name() << " signed: " << obj.get_sign() << " signed_grade: " << obj.get_sign_grade() << " execute_grade: " << obj.get_execute() << std::endl;
	return(stream);
}

const std::string Form::get_name()
{
	return(name);
}

int	Form::get_sign_grade()
{
	return(sign_grade);
}

int	Form::get_execute()
{
	return(execute);
}

bool	Form::get_sign()
{
	return(sign);
}