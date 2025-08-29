#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	return (0);
}
