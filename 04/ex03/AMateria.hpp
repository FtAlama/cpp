#ifndef AMATERIA_HPP

#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <string>

class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const &);
	virtual ~AMateria();
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &);
};

#endif
