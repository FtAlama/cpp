#include "DiamondTrap.hpp"
#include <iostream>

int main(void) {
	DiamondTrap d("player");
	std::cout << std::endl;
	d.whoAmI();
	std::cout << std::endl;
	d.attack();
	std::cout << std::endl;
	DiamondTrap dd;
	return (0);
}
