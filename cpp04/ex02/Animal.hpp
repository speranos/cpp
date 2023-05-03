/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:53:32 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/03 15:53:32 by aoueldma         ###   ########.fr       */
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
	virtual ~Animal();
	std::string getType() const;
	Animal	&operator= (const Animal &copy);
	virtual  void    makeSound() const = 0;
};

#endif