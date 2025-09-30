#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap *trap = new ScavTrap();
	trap->attack("feur");
	delete trap;

	ScavTrap t;
	t.attack();
	t.attack("test");
	return (0);
}
