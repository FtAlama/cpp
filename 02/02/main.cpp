#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;


	// Fixed a( 1234.4321f );
	// Fixed b;
	// Fixed c;
	//
	//
	// std::cout << (b > a) << std::endl;
	// std::cout << (b >= c) << std::endl;
	// std::cout << "a is " << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl << std::endl;
	// std::cout << ++b << std::endl;
	// std::cout << b++ << std::endl;
	// std::cout << b << std::endl;
	// std::cout << --b << std::endl;
	// std::cout << b-- << std::endl;
	// std::cout << --b << std::endl;
	// std::cout << b-- << std::endl;
	// std::cout << b << std::endl;
	// return (0);
}
