#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <ostream>

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

Fixed& Fixed::operator=(const Fixed &clone)
{
	std::cout << "copy assignment operator called\n";
	if (this != &clone)
		this->number_value = clone.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
