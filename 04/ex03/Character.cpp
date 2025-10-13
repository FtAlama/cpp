#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Character::Character() : name("default hero"), index(0) {
  std::cout << "default Character constructor called\n";
}

Character::Character(std::string const &name) : name(name), index(0) {
  std::cout << "Character " << this->name << " constructor called\n";
}

Character::~Character() {
  std::cout << "Character " << this->name << " destructor called\n";
}

Character::Character(Character const &clone)
    : name(clone.name), index(clone.index) {
  std::cout << "Copy constructor called\n";
}

Character &Character::operator=(Character const &clone) {
  std::cout << "Character affection constructor called\n";
  if (this != &clone) {
    this->name = clone.name;
    this->index = clone.index;
  }
  return (*this);
}

std::string const &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m) {
  if (this->index > 3 && m != NULL) {
    std::cout << "Character " << this->name << " equip the spell "
              << m->getType() << std::endl;
    this->m[this->index] = m;
    this->index++;
  } else {
    std::cout << "Character " << this->name << " have no more slot\n";
  }
}

void Character::unequip(int index) {
  if (index < 0 || index > 3)
    std::cout << "please use a right index between 0 to 3\n";
  else {
    this->m[index] = NULL;
    std::cout << "The materia number " << index
              << " has been remove form character " << this->name << std::endl;
  }
}

void Character::use(int index, ICharacter &target) {
  if (index < 0 || index > 3)
    std::cout << "please use a right index between 0 to 3\n";
  else {
    if (this->m[index]) {
      std::cout << "The character " << this->name << " ";
      this->m[index]->use(target);
    } else {
      std::cout << "The character " << this->name
                << " don't have a spell in the slot " << index << std::endl;
    }
  }
}
