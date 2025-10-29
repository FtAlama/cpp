#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap *trap = new ScavTrap();
	trap->attack("feur");
	std::cout << trap->get_name() << std::endl;
	delete trap;

	ScavTrap t;
	t.attack();
	t.attack("keyboard");
	t.guardGate();
	t.beRepaired(20);
	std::cout << t.get_name() << std::endl;
	return (0);
}
