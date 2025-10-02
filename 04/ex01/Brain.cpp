#include "Brain.hpp"
#include <iostream>

Brain::Brain() { std::cout << "A brain has been created\n"; }

Brain::Brain(const Brain &other) {
  std::cout << "Brain copy constructor called\n";
  for (unsigned int i = 0; i < 100; i++)
    this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << "Brain affection copy called\n";
  if (this != &other) {
    for (unsigned int i = 0; i < 100; i++)
      this->ideas[i] = other.ideas[i];
  }
  return (*this);
}

Brain::~Brain() {
  std::cout << "*The brain stop...\n What was the last thought ?\n Maybe some "
            << "great memorys or maybe some fear of dead*\n";
}

std::string Brain::get_ideas(unsigned int index) const {
  if (index >= 100)
    return ("out of brains cells\n");
  return (this->ideas[index]);
}

void	Brain::set_ideas(unsigned int index, const std::string thaught) {
	if (index >= 100)
		std::cout << "The think is not that clear... please think less\n";
	this->ideas[index] = thaught;
}
