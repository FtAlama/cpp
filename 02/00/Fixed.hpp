#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	~Fixed();
	int		getRawBits() const; 
	void	setRawBits(int const raw);

private:
	int								number_value;
	static const int	fractional_bits = 8;
};

#endif 
