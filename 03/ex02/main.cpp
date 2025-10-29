#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
  ClapTrap *trap = new ScavTrap();
  trap->attack("bullets");
  delete trap;

  ClapTrap *frag = new FragTrap();
  frag->takeDamage(40);
  delete frag;

  FragTrap f = FragTrap("Bob");
  f.highFivesGuys();
  std::cout << f.get_name() << "\nAttack value : " << f.get_attck()
            << "\nHit point : " << f.get_hit()
            << "\nEnergy value : " << f.get_energy() << std::endl;
  f.takeDamage(20);
  std::cout << f.get_name() << " hit point : " << f.get_hit() << std::endl;
  return (0);
}
