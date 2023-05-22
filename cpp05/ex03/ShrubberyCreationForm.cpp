/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:31:22 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:31:22 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 1, 1)
{
	target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target_up) : AForm(target_up, 145, 137)
{
	target = target_up;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm dest Called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= (ShrubberyCreationForm &copy)
{
	target = copy.target;
	return(*this);
}

void ShrubberyCreationForm::ft_execute(Bureaucrat const &executor) const
{
	if(get_sign() && executor.getGrade() <= get_sign_grade())
	{
		std::ofstream outfile (target);
		outfile << "    oxoxoo    ooxoo" << std::endl;
		outfile << "  ooxoxo oo  oxoxooo" << std::endl;
		outfile << " oooo xxoxoo ooo ooox" << std::endl;
		outfile << " oxo o oxoxo  xoxxoxo" << std::endl;
		outfile << "  oxo xooxoooo o ooo" << std::endl;
		outfile << "    ooo oo  /o/o" << std::endl;
		outfile << "         |    /" << std::endl;
		outfile << "         |   /" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "         |  |" << std::endl;
		outfile << "  ______/___|___" << std::endl;
		outfile.close();
	}
	else
		throw AForm::AFormGradeTooHighException();
}