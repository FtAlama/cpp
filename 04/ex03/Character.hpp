#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
private:
	std::string name;
	AMateria *m[4];
	unsigned int index;

public:
	Character();
	Character(std::string const &);
	~Character();
	Character(Character const &);
	Character &operator=(Character const &);

	std::string const &getName() const;
	unsigned int const getIndex() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif // !CHARACTER_HPP
