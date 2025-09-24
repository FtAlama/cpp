#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap *trap = new ScavTrap();
	trap->attack("bullets");
	delete trap;

	ClapTrap *frag = new FragTrap();
	frag->takeDamage(40);
	delete frag;

	FragTrap f = FragTrap("bob");
	f.highFivesGuys();

	return (0);
}
