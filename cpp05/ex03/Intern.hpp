/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 04:34:24 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/22 04:51:16 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class AFrom;
class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

class Intern
{
public:
	AForm *makeform(std::string form_name, std::string target);
	AForm *PresidentialPardon(std::string form_name, std::string target);
	AForm *RobotomyRequest(std::string form_name, std::string target);
	AForm *ShrubberyCreation(std::string form_name, std::string target);
};



#endif