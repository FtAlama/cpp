#include "ScavTrap.hpp"
#include <iostream>

void ScavTrap::init_value() {
  this->hit_point = 100;
  this->energy_point = 50;
  this->attck_dmg = 20;
}

ScavTrap::ScavTrap() {
  this->name = "robot";
  this->init_value();
  std::cout << "ScavTrap " << name << " constructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  init_value();
  std::cout << "ScavTrap " << name << " constructor with strings called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  ClapTrap::operator=(other);
  std::cout << "ScavTrap affection operator " << name << " called\n";
  return (*this);
}

void ScavTrap::guardGate() {
  std::cout << "The ScavTrap " << name << " is now in Gate keeper mode\n";
}

void ScavTrap::attack() {
  if (energy_point == 0)
    std::cout << "ScavTrap " << name << " have no more energy left\n";
  if (hit_point <= 0)
    std::cout << "ScavTrap " << name << " has no more hp, he's dead\n";
  if (this->hit_point > 0 && this->energy_point > 0) {
    std::cout << "ScavTrap " << name << " attack causing " << attck_dmg
              << " points of dammage\n";
    --this->energy_point;
  }
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destructor called\n";
}
