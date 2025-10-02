#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : number_value(0)
{
	std::cout << "default constructor called\n";
}

Fixed::Fixed(const int value): number_value(value << this->fractional_bits)
{
	std::cout << "int constructor called\n";
}

Fixed::Fixed(const float value)
{
	this->number_value = roundf(value * (1 << this->fractional_bits));
	std::cout << "float constructor called\n";
}

Fixed::Fixed(const Fixed &clone) 
{
	std::cout << "copy constructor called\n";

	this->number_value = clone.getRawBits();
}

int	Fixed::getRawBits() const
{
	return (this->number_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->number_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->number_value / (float)(1 << this->fractional_bits));
}

int	Fixed::toInt() const
{
	return (this->number_value >> this->fractional_bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getRawBits() <= rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs.getRawBits() <= rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getRawBits() >= rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs.getRawBits() >= rhs.getRawBits())
		return (lhs);
	return (rhs);
}
