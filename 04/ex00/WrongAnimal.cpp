#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("Wrong Base") {
  std::cout << "WrongAnimal constructor created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.get_type()) {
  std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  if (this != &other)
    this->type = other.get_type();
  std::cout << "WrongAnimal affection operator called\n";
  return (*this);
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type) {
  std::cout << "Constructor WrongAnimal with type string called\n";
}

std::string WrongAnimal::get_type() const { return this->type; }

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called\n"; }

void WrongAnimal::makeSound() {
  std::cout << "\"The creature have no mouth, no eyes, no face, no soual,\n"
            << "  what kind of abomination have you created ? ...\"\n";
}
