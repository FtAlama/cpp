#ifndef WRONG_ANIMAL_HPP

#define WRONG_ANIMAL_HPP
#include <string>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &);
  WrongAnimal &operator=(const WrongAnimal &);
  ~WrongAnimal();
  void makeSound();
  std::string get_type() const;

protected:
  std::string type;
	WrongAnimal(const std::string &);
};

#endif
