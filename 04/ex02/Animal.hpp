#ifndef ANIMAL_HPP

#define ANIMAL_HPP
#include <string>

class Animal {
public:
  virtual ~Animal();

protected:
  Animal();
  Animal(const Animal &);
  Animal &operator=(const Animal &);
  virtual void makeSound() const = 0;
  std::string get_type() const;
	Animal(const std::string &);
  std::string type;
};

#endif
