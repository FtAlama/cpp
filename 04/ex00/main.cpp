#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void) {
  Animal am;
  am.makeSound();
  Animal *a = new Dog();
  a->makeSound();
  Dog d;
  d.makeSound();
  Dog dogo(d);
  dogo.makeSound();

  Cat lila;
  lila.makeSound();
  std::cout << "get type : " << lila.get_type() << std::endl;
  std::cout << "get type : " << a->get_type() << std::endl;
  std::cout << "get type : " << am.get_type() << std::endl;
  delete a;

  WrongAnimal *wa = new WrongCat();
	std::cout << "get type : " << wa->get_type() << std::endl;
  delete wa;
}
