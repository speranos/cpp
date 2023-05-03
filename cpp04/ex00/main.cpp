/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:58:22 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/03 13:23:08 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal    	*to_animal = new Animal();
	const Animal    	*to_dog = new Dog();
	const Animal    	*to_cat = new Cat();
	const WrongAnimal   *wrong = new WrongCat();

	std::cout << to_animal->getType() << std::endl;
	std::cout << to_dog->getType() << std::endl;
	std::cout << to_cat->getType() << std::endl;
	to_cat->makeSound();
	to_dog->makeSound();
	to_animal->makeSound();
	wrong->makeSound();
	delete to_animal;
	delete to_cat;
	delete to_dog;
	delete wrong;
	return 0;
}