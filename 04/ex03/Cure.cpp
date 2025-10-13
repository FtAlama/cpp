#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") { std::cout << "Cure materia created\n"; }

Cure::Cure(const Cure &clone) : AMateria(clone.type) {
  std::cout << "Cure copy constructor called\n";
}

Cure &Cure::operator=(const Cure &clone) {
  if (this != &clone)
    this->type = type;
  std::cout << "Cure affection operator called\n";
  return (*this);
}

AMateria *Cure::clone() const {
  std::cout << "New instance of ice\n";
  try {
    AMateria *clone = new Cure(*this);
    return (clone);
  } catch (std::bad_alloc &) {
    std::cout << "Bad alloc expections caught\n";
    return (NULL);
  }
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s *\n";
}

Cure::~Cure() { std::cout << "Cure destructor called\n"; }
