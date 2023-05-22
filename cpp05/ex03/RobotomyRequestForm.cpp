/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:31:31 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:57:32 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 1, 1)
{
	target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target_up) : AForm(target_up, 72, 45)
{
	target = target_up;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm dest Called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (RobotomyRequestForm &copy)
{
	target = copy.target;
	return(*this);
}

void RobotomyRequestForm::ft_execute(Bureaucrat const &executor) const
{
	if(get_sign() && executor.getGrade() <= get_sign_grade())
		std::cout << target << " has been robotomized successfully 50%" <<  " of the time." << std::endl;
	else
	{
		std::cout << "The robotomy failed." << std::endl;
		throw AForm::AFormGradeTooHighException();
	}
}