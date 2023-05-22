/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:32:58 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 05:10:02 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat a("corki", 5);
		Bureaucrat c("nun", 1);
		std::string	name = "vex";
		Intern make;
		AForm *makere = make.makeform("ShrubberyCreationForm", name);

		std::cout << a << std::endl;
		
		c.executeForm(*makere);
		
		makere = make.makeform("ShrubberyCreationForm", name);
		makere->beSigned(c);
		makere->ft_execute(c);
		delete makere;
		//
		name = "kaisa";
		makere = make.makeform("RobotomyRequestForm", name);
		makere->beSigned(c);
		makere->ft_execute(c);
		delete makere;
		//
		name = "teemo";
		makere = make.makeform("PresidentialPardonForm", name);
		makere->beSigned(c);
		makere->ft_execute(c);
		delete makere;
		
		a.increment();
		std::cout << a << std::endl;
	}
	catch(std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}	
}
