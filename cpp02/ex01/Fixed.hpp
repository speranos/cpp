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
	void  	operator= (Fixed const &copy);
	int		getRawBits(void) const;
	void  	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
};
std::ostream &operator<< (std::ostream &stream, const Fixed &obj);
// void	operator<< (std::ostream  &stream, const Fixed &obj);

#endif