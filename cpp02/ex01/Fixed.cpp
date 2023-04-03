/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 09:01:10 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/03 08:17:58 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//DESTRA
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


//CONSTRA
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point = num * (1 << bits_shift);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = round(num * (1 << bits_shift));
}

//MEMB_FNCT
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(fixed_point);
}

void  Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

Fixed	&Fixed::operator= (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = copy.fixed_point;
	return(*this);
}

float	Fixed::toFloat() const
{
	float num;

	num = ((float)fixed_point / (1 << bits_shift));
	return(num);
}

int	Fixed::toInt() const
{
	int	num;

	num = fixed_point / (1 << bits_shift);
	return(num);
}

std::ostream &operator<< (std::ostream  &stream, const Fixed &obj)
{
	stream << obj.toFloat();
	return(stream);
}