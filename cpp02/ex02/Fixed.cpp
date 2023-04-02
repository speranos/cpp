#include "Fixed.hpp"

//DESTRA
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


//CONSTRA
Fixed::Fixed()
{
	fixed_point = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
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
	return(fixed_point);
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
Fixed	&Fixed::operator= (Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = copy.fixed_point;
	return(*this);
}

std::ostream &operator<< (std::ostream  &stream, const Fixed &obj)
{
	stream << obj.toFloat();
	return(stream);
}

bool	Fixed::operator< (Fixed const &obj2) const
{
	return(fixed_point < obj2.fixed_point);
}

bool	Fixed::operator<= (Fixed const &obj2)
{
	return(fixed_point <= obj2.fixed_point);
}

bool	Fixed::operator> (Fixed const &obj2) const
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

// OPERA ////////////////
Fixed	Fixed::operator+ (Fixed obj2)
{
	Fixed ret(toFloat() + obj2.toFloat());
	return(ret);
}

Fixed	Fixed::operator/ (Fixed obj2)
{
	Fixed ret(toFloat() / obj2.toFloat());
	return(ret);
}

Fixed	Fixed::operator- (Fixed obj2)
{
	Fixed ret(toFloat() - obj2.toFloat());
	return(ret);
}

Fixed	Fixed::operator* (Fixed obj2)
{
	Fixed ret(toFloat() * obj2.toFloat());
	return(ret);
}

//Minnnnnnnnn

Fixed	&Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if(obj1.getRawBits() < obj2.getRawBits())
		return(obj1);
	else
		return(obj2);
}

Fixed const	&Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
	if(obj1.getRawBits() < obj2.getRawBits())
		return(obj1);
	else
		return(obj2);
}

//Maxxxxxxxx

Fixed	&Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if(obj1.getRawBits() > obj2.getRawBits())
		return(obj1);
	else
		return(obj2);
}

Fixed const	&Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
	if(obj1.getRawBits() > obj2.getRawBits())
		return(obj1);
	else
		return(obj2);
}