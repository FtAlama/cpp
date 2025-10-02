#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Base") { std::cout << "Animal constructor created\n"; }

Animal::Animal(const Animal &other) : type(other.get_type()) {
  std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other) {
  if (this != &other)
    this->type = other.get_type();
  std::cout << "Animal affection operator called\n";
  return (*this);
}

Animal::Animal(const std::string &type) : type(type) {
  std::cout << "Constructor Animal with type string called\n";
}

std::string Animal::get_type() const { return this->type; }

Animal::~Animal() { std::cout << "Animal destructor called\n"; }

void Animal::makeSound() const {
  std::cout << "\"The creature have no mouth, no eyes, no face, no soual,\n"
            << "  what kind of abomination have you created ? ...\"\n";
}


