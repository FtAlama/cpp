#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") { std::cout << "Ice materia created\n"; }

Ice::Ice(const Ice &clone) : AMateria(clone.type) {
  std::cout << "Ice copy constructor called\n";
}

Ice &Ice::operator=(const Ice &clone) {
  if (this != &clone)
    this->type = type;
  std::cout << "Ice affection operator called\n";
  return (*this);
}

AMateria *Ice::clone() const {
  std::cout << "New instance of ice\n";
  try {
    AMateria *clone = new Ice(*this);
    return (clone);
  } catch (std::bad_alloc &) {
    std::cout << "Bad alloc expections caught\n";
    return (NULL);
  }
}

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice() { std::cout << "Ice destructor called\n"; }
