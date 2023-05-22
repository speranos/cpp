/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:32:46 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:32:46 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &copy);
	PresidentialPardonForm(std::string &target_up);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator =(PresidentialPardonForm &copy);
	void	ft_execute(Bureaucrat const & executor) const;
};

#endif