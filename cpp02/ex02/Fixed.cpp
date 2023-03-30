#include "Fixed.hpp"

//DESTRA
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


//CONSTRA
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
	// float f;
	// f = (float)fixed_point / 256;
	return(fixed_point);
	// return(f);
}

void  Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
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

//OVERLOAD
void	Fixed::operator= (Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
 	// if (this == &copy)
    // {
    //     return;
    // }
	fixed_point = copy.fixed_point;
}

std::ostream &operator<< (std::ostream  &stream, const Fixed &obj)
{
	stream << obj.toFloat();
	return(stream);
}

bool	Fixed::operator< (Fixed const &obj2)
{
	return(fixed_point < obj2.fixed_point);
}

bool	Fixed::operator<= (Fixed const &obj2)
{
	return(fixed_point <= obj2.fixed_point);
}

bool	Fixed::operator> (Fixed const &obj2)
{
	return(fixed_point > obj2.fixed_point);
}

bool	Fixed::operator>= (Fixed const &obj2)
{
	return(fixed_point >= obj2.fixed_point);
}

bool	Fixed::operator== (Fixed const &obj2)
{
	return(fixed_point == obj2.fixed_point);
}

bool	Fixed::operator!= (Fixed const &obj2)
{
	return(fixed_point != obj2.fixed_point);
}

Fixed	&Fixed::operator++ ()
{
	++fixed_point;
	return(*this);
}

Fixed	&Fixed::operator-- ()
{
	--fixed_point;
	return(*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed	ret = *this;
	fixed_point++;
	// ++(*this);
	return(ret);
}

Fixed	&Fixed::operator-- (int)
{
	--fixed_point;
	return(*this);
}

Fixed	Fixed::operator* (Fixed obj2)
{
	std::cout << "value " << fixed_point << std::endl;
	std::cout << "obj2.value " << obj2.fixed_point << std::endl;
	Fixed ret;

	ret.fixed_point = fixed_point * obj2.fixed_point;
	// Fixed ret;
	// ret.fixed_point = toFloat() * obj2.toFloat();
	std::cout << "ret.value " << ret.fixed_point << std::endl;
	return(ret);
}