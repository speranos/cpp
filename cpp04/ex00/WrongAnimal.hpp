/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:56:51 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/18 00:56:51 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"


class WrongAnimal
{
	protected:
	std::string type;
	public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
    ~WrongAnimal();
	std::string getType() const;
	WrongAnimal	&operator= (const WrongAnimal &copy);
	void    makeSound() const;
};

#endif