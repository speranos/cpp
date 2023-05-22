/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 02:26:34 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 02:26:34 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
	grade = 1;
	std::cout << "Default const called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
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

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
	const_cast<std::string&>(name) = copy.getName();
	grade = copy.getGrade();
	return(*this);
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