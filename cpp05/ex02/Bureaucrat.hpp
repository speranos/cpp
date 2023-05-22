/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:21:15 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:21:15 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;
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
	int	getGrade() const;
	void	increment();
	void	decrement();
	void	signForm(AForm &obj);
	void	executeForm(AForm const & AForm);
};
std::ostream &operator<< (std::ostream  &stream, Bureaucrat &obj);
#endif