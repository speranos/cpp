/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:28:45 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:28:45 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	ShrubberyCreationForm(std::string &target_up);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator =(ShrubberyCreationForm &copy);
	void	ft_execute(Bureaucrat const & executor) const;
};

#endif