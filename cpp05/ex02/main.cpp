/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:22:04 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:22:04 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat a("corki", 5);
		Bureaucrat c("nun", 1);
		std::string	name = "vex";
		ShrubberyCreationForm	shrubbery(name);
		name = "kaisa";
		RobotomyRequestForm	robot(name);
		name = "teemo";
		PresidentialPardonForm presidential(name);

		std::cout << a << std::endl;
		c.executeForm(shrubbery);
		shrubbery.beSigned(c);
		shrubbery.ft_execute(c);
		//
		robot.beSigned(c);
		robot.ft_execute(c);
		//
		presidential.beSigned(c);
		presidential.ft_execute(c);
		a.increment();
		std::cout << a << std::endl;
	}
	catch(std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	// std::cout << c << std::endl;
	// c.decrement();
	
}
