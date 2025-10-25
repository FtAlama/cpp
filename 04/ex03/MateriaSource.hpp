#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource {
private:
	AMateria *m[4];
	unsigned int index;

public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	MateriaSource &operator=(MateriaSource const &);
	~MateriaSource();
	void learnMateria(AMateria *);
	AMateria *creatMateria(std::string const & type);
};


#endif
