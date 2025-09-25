#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap d("player");
	d.whoAmI();
	d.attack();
	ScavTrap p;
	return (0);
}
