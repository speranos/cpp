#include "AForm.hpp"

AForm::AForm(AForm &copy) : name(copy.get_name()), sign_grade(copy.get_sign_grade()), execute(copy.get_execute())
{
	sign = copy.get_sign();
	std::cout << "Copy const called !" << std::endl;
}

AForm	&AForm::operator=(AForm &copy)
{
	const_cast<std::string&>(name) = copy.get_name();
	const_cast<int&>(sign_grade) = copy.get_sign_grade();
	const_cast<int&>(execute) = copy.get_execute();
	sign = copy.get_sign();
	return(*this);
}

void	AForm::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() <= get_sign_grade())
		sign = true;
	else
		throw AForm::AFormGradeTooLowException();
}

std::ostream &operator<< (std::ostream  &stream, AForm &obj)
{
	(void)obj;
	stream << obj.get_name() << " signed: " << obj.get_sign() << " signed_grade: " << obj.get_sign_grade() << " execute_grade: " << obj.get_execute() << std::endl;
	return(stream);
}

AForm::AForm() : name("default") , sign_grade(1) , execute(1)
{
	sign = false;
	std::cout << "const called !" << std::endl;
}

AForm::AForm(std::string name_up, int grade_up, int execute_up) : name(name_up), sign_grade(grade_up), execute(execute_up)
{
	if(sign_grade <= 0)
		throw AForm::AFormGradeTooHighException();
	else if(sign_grade > 150)
		throw AForm::AFormGradeTooLowException();
	if(execute <= 0)
		throw AForm::AFormGradeTooHighException();
	else if(execute > 150)
		throw AForm::AFormGradeTooLowException();
	sign = false;
}

AForm::~AForm()
{
	std::cout << "Dest called !" << std::endl;
}

const std::string AForm::get_name() const
{
	return(name);
}

int	AForm::get_sign_grade() const
{
	return(sign_grade);
}

int	AForm::get_execute() const
{
	return(execute);
}

bool	AForm::get_sign() const
{
	return(sign);
}