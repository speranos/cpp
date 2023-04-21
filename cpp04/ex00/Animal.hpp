/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enima <enima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:57:01 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/21 03:22:42 by enima            ###   ########.fr       */
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
	virtual  void    makeSound() const;
};

#endif