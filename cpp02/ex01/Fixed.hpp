/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 09:01:19 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/03 08:17:51 by aoueldma         ###   ########.fr       */
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
};
std::ostream &operator<< (std::ostream &stream, const Fixed &obj);

#endif