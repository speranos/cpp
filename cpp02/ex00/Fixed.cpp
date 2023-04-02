/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 07:33:28 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/02 07:33:28 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point = copy.getRawBits();
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return(fixed_point);
}

void  Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

Fixed	&Fixed::operator= (Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = copy.getRawBits();
	return(*this);
}