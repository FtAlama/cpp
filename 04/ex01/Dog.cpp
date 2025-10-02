#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), cerebrum(new Brain()) {
  std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
  Animal::operator=(other);
  std::cout << "Dog affection operator called\n";
  return (*this);
}

void Dog::makeSound() const { std::cout << "*BARK, BARK*\n"; }

Dog::~Dog() {
  std::cout << "Dog destructor called\n";
  delete cerebrum;
}
