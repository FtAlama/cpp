#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : index(0) {
  std::cout << "MateriaSource constructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const &clone) : index(clone.index) {
	std::cout << "MateriaSource copy constructor called\n";
	for (unsigned int i = 0; i < index; i++)
		this->m[i] = clone.m[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &clone) {
	if (this != &clone) {
		this->index = clone.index;
		for (unsigned int i = 0; i < index; i++)
			this->m[i] = clone.m[i];
	}
	std::cout << "Materia affection operator called\n";
	return (*this);
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destruction called\n";
	for (unsigned int i = 0; i < index; i++) {
		if (this->m[i])
			delete this->m[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (!m) {
		std::cout << "Not a valid materia\n";
		return ;
	}
	std::cout << "Materia " << m->getType() << " was been learn\n";
}


