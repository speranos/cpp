/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 08:59:24 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/03 08:21:56 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed
{
	int fixed_point;
	static const int bits_shift = 8;
	public:
	~Fixed();
	Fixed();
	Fixed(const int num);
	Fixed(Fixed const &copy);
	Fixed(const float num);
	Fixed	&operator= (const Fixed &copy);
	int		getRawBits(void) const;
	void  	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
	bool	operator< (Fixed const &obj2) const;
	bool	operator<= (Fixed const &obj2);
	bool	operator> (Fixed const &obj2) const;
	bool	operator>= (Fixed const &obj2);
	bool	operator== (Fixed const &obj2);
	bool	operator!= (Fixed const &obj2);
	Fixed	operator* (Fixed obj2);
	Fixed	operator/(Fixed obj2);
	Fixed	operator- (Fixed obj2);
	Fixed	operator+ (Fixed obj2);
	//postfix
	Fixed	&operator++ ();
	Fixed	&operator-- ();
	//postfix
	Fixed	operator-- (int);
	Fixed	operator++ (int);
	//MIN && MAXXXX
	static Fixed	&min(Fixed &abj1, Fixed &obj2);
	static Fixed	&max(Fixed &abj1, Fixed &obj2);
	static const Fixed	&min(Fixed const &abj1, Fixed const &obj2);
	static const Fixed	&max(Fixed const &abj1, Fixed const &obj2);

};
std::ostream &operator<< (std::ostream &stream, const Fixed &obj);

#endif