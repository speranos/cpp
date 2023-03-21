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
	Fixed(int up)
	{
		fixed_point = up;
	}
	Fixed(const Fixed &copy);
	void  operator= (Fixed &copy);
	int   getRawBits(void);
	void  setRawBits(int const raw);
};

#endif