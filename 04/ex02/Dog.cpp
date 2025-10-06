#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), cerebrum(new Brain()) {
  std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other), cerebrum(new Brain(*other.cerebrum)) {
  std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog affection operator called\n";
  Animal::operator=(other);
	delete this->cerebrum;
	this->cerebrum = new Brain(*other.cerebrum);
  return (*this);
}

void Dog::makeSound() const { std::cout << "*BARK, BARK*\n"; }

Dog::~Dog() {
  std::cout << "Dog destructor called\n";
  delete cerebrum;
}
