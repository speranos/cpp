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

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// fixed_point = copy.fixed_point
	(void)copy;
	fixed_point = getRawBits();
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

void	Fixed::operator= (Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = copy.fixed_point;
}