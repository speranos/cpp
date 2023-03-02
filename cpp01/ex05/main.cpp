/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:13:43 by aoueldma          #+#    #+#             */
/*   Updated: 2023/03/02 21:13:43 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	cmd;

	cmd.complain("DEBUG");
	cmd.complain("INFO");
	cmd.complain("WARNING");
	cmd.complain("ERROR");
	cmd.complain("warning");
	cmd.complain("info");
	cmd.complain("errrrr");
	cmd.complain("error");
	cmd.complain("");

}