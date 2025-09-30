#include "Dog.hpp"

int main(void)
{
	Animal am;
	am.makeSound();
	Animal *a = new Dog();
	a->makeSound();
	Dog d;
	d.makeSound();
	Dog dogo(d);
	dogo.makeSound();
	delete a;
}
