#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
	int fixed_point;
	static const int bits_shift = 8;
	public:
	Fixed();
	~Fixed();
	Fixed(Fixed &copy);
	Fixed(const int num);
	void  operator= (Fixed &copy);
	int   getRawBits(void);
	void  setRawBits(int const raw);
};

#endif