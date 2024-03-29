/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 07:33:15 by aoueldma          #+#    #+#             */
/*   Updated: 2023/04/03 08:15:08 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
	int fixed_point;
	static const int bits_shift;
	public:
	Fixed();
	~Fixed();
	Fixed(Fixed &copy);
	Fixed &operator= (const Fixed &copy);
	int   getRawBits(void) const;
	void  setRawBits(int const raw);
};

#endif