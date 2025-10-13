#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : type(type) {
  std::cout << "New AMateria created\n";
}

std::string const &AMateria::getType() const { return (this->type); }

AMateria::~AMateria() { std::cout << "AMateria destructor called\n"; }
