#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

void DiamondTrap::init_value() {
  this->hit_point = FragTrap::hit_point;
  this->energy_point = ScavTrap::hit_point;
  this->attck_dmg = FragTrap::attck_dmg;
}

DiamondTrap::DiamondTrap() : name("shinny") {
  ClapTrap::name = name + "_clap_name";
  init_value();
  std::cout << "DiamondTrap " << name << " constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : name(name) {
  ClapTrap::name = name + "_clap_name";
  init_value();
  std::cout << "DiamondTrap " << name << " constructor with strings called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
  std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  ClapTrap::operator=(other);
  std::cout << "DiamondTrap affection operator " << name << " called\n";
  return (*this);
}

void DiamondTrap::whoAmI() {
  std::cout << "DiamondTrap name : " << name << std::endl
            << "DiamondTrap ClapTrap name : " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << name << " destructor called\n";
}
