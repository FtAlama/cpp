#ifndef FIXED_H
# define FIXED_H

# include <ostream>

class Fixed {
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

private:
	int								number_value;
	static const int	fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &, Fixed const &);

#endif 
