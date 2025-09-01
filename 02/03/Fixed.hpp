#ifndef FIXED_H
# define FIXED_H

# include <ostream>

# define EPSILON 1

class Fixed {
private:
	int								number_value;
	static const int	fractional_bits = 8;

public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
	~Fixed();
	int						getRawBits() const; 
	void					setRawBits(int const raw);
	float					toFloat() const;
	int						toInt() const;
	Fixed					&operator=(const Fixed &);
	Fixed					&operator++();
	Fixed					operator++(int);
	Fixed					&operator--();
	Fixed					operator--(int);
	static Fixed	&min(Fixed &, Fixed &);	
	static Fixed	&max(Fixed &, Fixed &);	
	static const Fixed	&min(const Fixed &, const Fixed &);	
	static const Fixed	&max(const Fixed &, const Fixed &);	
	static int getFractionalBits() { return fractional_bits; }
};

std::ostream	&operator<<(std::ostream &, Fixed const &);
bool					operator>(Fixed const &, Fixed const &);
bool					operator<(Fixed const &, Fixed const &);
bool					operator>=(Fixed const &, Fixed const &);
bool					operator<=(Fixed const &, Fixed const &);
bool					operator==(Fixed const &, Fixed const &);
bool					operator!=(Fixed const &, Fixed const &);
Fixed					operator+(Fixed const &, Fixed const &);
Fixed					operator-(Fixed const &, Fixed const &);
Fixed					operator*(Fixed const &, Fixed const &);
Fixed					operator/(Fixed const &, Fixed const &);

#endif 
