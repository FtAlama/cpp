#include "Fixed.hpp"
# include <iostream>

Fixed::Fixed() : number_value(0)
{
	std::cout << "default constructor called\n";
}

Fixed::Fixed(const Fixed &clone) 
{
	std::cout << "copy constructor called\n";

	this->number_value = clone.getRawBits();
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->number_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->number_value = raw;
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

