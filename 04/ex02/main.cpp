#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void) {
  Dog d;
  d.makeSound();
  Dog dogo;
  dogo = d;
  dogo.makeSound();

  Animal *animal[10];
  for (unsigned int i = 0; i < 10; i++) {
    if (i % 2 == 0)
      animal[i] = new Dog();
    else
      animal[i] = new Cat();
    std::cout << std::endl;
  }
  for (unsigned int i = 0; i < 10; i++) {
    delete animal[i];
    std::cout << std::endl;
  }
}
