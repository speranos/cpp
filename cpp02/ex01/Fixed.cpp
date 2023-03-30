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
	fixed_point = copy.getRawBits();
}

Fixed::Fixed(const int num)
{
	fixed_point = num * (1 << bits_shift);
}

Fixed::Fixed(const float num)
{
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

void	Fixed::operator= (Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
 	// if (this == &copy)
    // {
    //     return;
    // }
	fixed_point = copy.fixed_point;
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