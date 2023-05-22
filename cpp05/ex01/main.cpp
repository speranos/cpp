/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 02:27:45 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:18:17 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat a("corki", 5);
		Bureaucrat c("nun", 2);
		Form b("vex", 3, 1);
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		a.increment();
		a.signForm(b);
		b.beSigned(c);
		std::cout << a << std::endl;
		std::cout << b << std::endl;

	}
	catch(std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	// std::cout << c << std::endl;
	// c.decrement();
	
}
