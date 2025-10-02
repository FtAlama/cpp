#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  WrongAnimal::operator=(other);
  std::cout << "WrongCat affection operator called\n";
  return (*this);
}

void WrongCat::makeSound() { std::cout << "*rrrrr, miaaaaaaouuuuuu*\n"; }

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called\n"; }
