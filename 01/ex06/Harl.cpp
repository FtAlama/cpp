#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug() {
  std::cout << "[DEBUG]\n";
  std::cout << "I love having extra bacon for\n"
            << "my 7XL-double-cheese-triple-pickle-special-\n"
            << "ketchup burger. I really do!\n"
            << std::endl;
}

void Harl::info() {
  std::cout << "[INFO]\n";
  std::cout << "I cannot believe adding extra bacon costs more money.\n"
            << "You didn’t put enough bacon in my burger!\n"
            << "If you did, I wouldn’t be asking for more!\n"
            << std::endl;
}

void Harl::warning() {
  std::cout << "[WARNING]\n";
  std::cout << "think I deserve to have some extra bacon for free.\n"
            << "I’ve been coming for years, whereas you started working\n"
            << "here just last month.\n"
            << std::endl;
}

void Harl::error() {
  std::cout << "[ERROR]\n";
  std::cout << "This is unacceptable! I want to speak to the manager now.\n"
            << std::endl;
}

void Harl::default_msg() {
  std::cout << "Seriously? I’ve been a loyal customer forever,\n"
            << "and you expect me to pay extra for something that\n"
            << "should already be included? This is ridiculous!\n";
}

void Harl::complain(std::string word) {
  unsigned int index = 0;
  std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  while (index < 4 && str[index].compare(word)) {
    index++;
  }
  switch (index) {
  case 0:
    this->debug(); // fall through
  case 1:
    this->info(); // fall through
  case 2:
    this->warning(); // fall through
  case 3:
    this->error();
    break;
  default:
    this->default_msg();
  }
}
