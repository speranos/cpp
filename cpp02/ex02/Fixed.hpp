#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed
{
	int fixed_point;
	static const int bits_shift;
	public:
	~Fixed();
	Fixed();
	Fixed(const int num);
	Fixed(Fixed const &copy);
	Fixed(const float num);
	Fixed	&operator= (Fixed const &copy);
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
	Fixed	&operator-- (int);
	Fixed	operator++ (int);
	//MIN && MAXXXX
	Fixed	&min(Fixed &abj1, Fixed &obj2);
	Fixed	&max(Fixed &abj1, Fixed &obj2);
	const Fixed	&min(Fixed const &abj1, Fixed const &obj2);
	const Fixed	&max(Fixed const &abj1, Fixed const &obj2);

};
std::ostream &operator<< (std::ostream &stream, const Fixed &obj);

#endif