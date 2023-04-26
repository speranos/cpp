#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	const std::string name;
	bool sign;
	const int sign_grade;
	const int execute;
public:
	Form();
	~Form();
	const char*	FormGradeTooHighException();
	const char*	FormGradeTooLowException();
	Form(std::string name_up, int grade_up, int execute_up);
	void	beSigned(Bureaucrat &obj);
};

std::ostream &operator<< (std::ostream  &stream, Form &obj);
#endif