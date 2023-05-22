/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 02:27:34 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:08:01 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	const std::string name;
	bool sign;
	const int sign_grade;
	const int execute;
public:
	class FormGradeTooHighException : public std::exception
	{
	public:

		const char *what() const throw()
		{
			return("GradeTooHighException !");
		}
	};

	class FormGradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return("GradeTooLowException !");
		}
	};

	Form();
	Form(Form &copy);
	Form(std::string name_up, int grade_up, int execute_up);
	~Form();
	Form	&operator=(Form &copy);
	void	beSigned(Bureaucrat &obj);
	const std::string	get_name();
	int	get_sign_grade();
	int	get_execute();
	bool	get_sign();
};

std::ostream &operator<< (std::ostream  &stream, Form &obj);
#endif