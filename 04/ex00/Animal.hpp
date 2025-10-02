#ifndef ANIMAL_HPP

#define ANIMAL_HPP
#include <string>

class Animal {
public:
  Animal();
  Animal(const Animal &);
  Animal &operator=(const Animal &);
  virtual ~Animal();
  virtual void makeSound();
  std::string get_type() const;

protected:
  std::string type;
	Animal(const std::string &);
};

#endif
