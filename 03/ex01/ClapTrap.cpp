#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : name("default"), hit_point(10), energy_point(10), attck_dmg(0) {
  std::cout << "ClapTrap " << name << " constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name)
    : name(name), hit_point(10), energy_point(10), attck_dmg(0) {
  std::cout << "ClapTrap " << name << " constructor with strings called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.get_name()), hit_point(other.get_hit()),
      energy_point(other.get_energy()), attck_dmg(other.get_attck()) {
  std::cout << "ClapTrap " << name << " copy constructor called\n";
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name << " destructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    this->name = other.get_name();
    this->hit_point = other.get_hit();
    this->energy_point = other.get_energy();
    this->attck_dmg = other.get_attck();
  }
  std::cout << "ClapTrap affection operator " << name << " called\n";
  return (*this);
}

std::string ClapTrap::get_name() const { return (this->name); }

unsigned int ClapTrap::get_hit() const { return (this->hit_point); }

unsigned int ClapTrap::get_energy() const { return (this->energy_point); }

unsigned int ClapTrap::get_attck() const { return (this->attck_dmg); }

void ClapTrap::attack(const std::string &target) {
  if (energy_point == 0)
    std::cout << "ClapTrap " << name << " have no more energy left\n";
  if (hit_point <= 0)
    std::cout << "ClapTrap " << name << " has no more hp, he's dead\n";
  if (this->hit_point > 0 && this->energy_point > 0) {
    std::cout << "ClapTrap " << name << " use " << target << " causing "
              << attck_dmg << " points of dammage\n";
    --this->energy_point;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energy_point == 0)
    std::cout << "ClapTrap " << name << " have no more energy left\n";
  if (hit_point <= 0)
    std::cout << "ClapTrap " << name << " has no more hp, he's dead\n";
  if (this->hit_point > 0 && this->energy_point > 0) {
    std::cout << "ClapTrap " << name << " heal " << amount
              << " points of life\n";
    hit_point += amount;
    --energy_point;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (energy_point == 0)
    std::cout << "ClapTrap " << name << " have no more energy left\n";
  if (hit_point <= 0)
    std::cout << "ClapTrap " << name << " has no more hp, he's dead\n";
  if (this->hit_point > 0 && this->energy_point > 0) {
    std::cout << "ClapTrap " << name << " got hit " << amount
              << " points of life\n";
    if (hit_point <= amount) {
      std::cout << "ClapTrap " << name << " is dead\n";
      hit_point = 0;
    } else {
      hit_point -= amount;
    }
  }
}
