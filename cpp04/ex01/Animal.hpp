/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:28:47 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/03 14:31:50 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
	std::string type;
	public:
	Animal();
	Animal(Animal &copy);
 	std::string getType() const;
	Animal	&operator= (const Animal &copy);
	virtual  void    makeSound() const;
};

#endif