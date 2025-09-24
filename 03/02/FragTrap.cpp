#include "FragTrap.hpp"
#include <iostream>

void FragTrap::init_value() {
  this->hit_point = 100;
  this->energy_point = 100;
  this->attck_dmg = 30;
}

FragTrap::FragTrap() {
  this->name = "npc";
  this->init_value();
  std::cout << "FragTrap " << name << " constructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  init_value();
  std::cout << "FragTrap " << name << " constructor with strings called\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  ClapTrap::operator=(other);
  std::cout << "FragTrap affection operator " << name << " called\n";
  return (*this);
}

void FragTrap::highFivesGuys() {
  std::cout << "The FragTrap " << name << " is doing a hug\n";
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name << " destructor called\n";
}
