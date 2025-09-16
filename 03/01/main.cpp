#include "ClapTrap.hpp"

int main(void) {
	ClapTrap t;
	ClapTrap a("robot");
	ClapTrap b(a);
	t.takeDamage(11);
	return (0);
}
