#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), cerebrum(new Brain()) {
  std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other), cerebrum(new Brain(*other.cerebrum)) {
  std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat affection operator called\n";
  Animal::operator=(other);
	delete this->cerebrum;
	this->cerebrum = new Brain(*other.cerebrum);
  return (*this);
}

void Cat::makeSound() const { std::cout << "*rrrrr, miaaaaaaouuuuuu*\n"; }

Cat::~Cat() {
  std::cout << "Cat destructor called\n";
  delete cerebrum;
}
