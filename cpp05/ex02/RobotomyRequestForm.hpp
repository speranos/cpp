/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:27:04 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:27:04 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;
class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &copy);
	RobotomyRequestForm(std::string &target_up);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator =(RobotomyRequestForm &copy);
	void	ft_execute(Bureaucrat const & executor) const;
};

#endif