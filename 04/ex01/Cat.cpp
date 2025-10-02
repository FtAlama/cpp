#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), cerebrum(new Brain()) {
  std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other) {
  Animal::operator=(other);
  std::cout << "Cat affection operator called\n";
  return (*this);
}

void Cat::makeSound() const { std::cout << "*rrrrr, miaaaaaaouuuuuu*\n"; }

Cat::~Cat() {
  std::cout << "Cat destructor called\n";
  delete cerebrum;
}
