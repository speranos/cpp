/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:21:19 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:21:19 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
	grade = 0;
	std::cout << "Default const called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
	const_cast<std::string&>(name) = copy.getName();
	grade = copy.getGrade();
	return(*this);
}

Bureaucrat::Bureaucrat(std::string name_up, int grade_up) : name(name_up)
{
	if(grade_up <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if(grade_up > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = grade_up;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destr Called !" << std::endl;
}

const std::string	Bureaucrat::getName()
{
	return name;
}

int	Bureaucrat::getGrade() const
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
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrement()
{
	grade++;
	if(grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &obj)
{
	if(getGrade() <= obj.get_sign_grade() && obj.get_sign())
		std::cout << getName() << " signed " << obj.get_name() << std::endl;
	else
		std::cout << getName() << " couldn’t sign " << obj.get_name() << " because " << obj.get_name() << " Grade Higher then " << getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const & Aform)
{
	if(Aform.get_sign() && getGrade() <= Aform.get_sign_grade())
		std::cout << name << " executed " << Aform.get_name() << std::endl;
	else if(!Aform.get_sign())
		std::cout << name << " Cannot executed " << Aform.get_name() << " cuz the grade is not signed yet" << std::endl;
	else
		std::cout << name << " Cannot executed " << Aform.get_name() << " cuz the grade is to low" << std::endl;
}