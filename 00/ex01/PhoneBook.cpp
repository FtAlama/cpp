#include "PhoneBook.h"
#include <cctype>
#include <cstdlib>

PhoneBook::PhoneBook(void) {
  std::cout << "Welcome to : My PhoneBook" << std::endl;
}

void ft_getline(std::string &str) {
  getline(std::cin, str);
  if (std::cin.eof() == true) {
    std::cout << std::endl << "You just ctrl + D" << std::endl;
    exit(0);
  }
}

void PhoneBook::search(int i) {
  std::string usr_input("");
  int nb;
  if (i == 0) {
    std::cout << "No contact add." << std::endl;
    return;
  }
  this->my_contact[0].contact_print(1);
  for (int j = 1; j < i; j++)
    this->my_contact[j].contact_print(0);
  std::cout << "Please add an index number for more info : ";
  ft_getline(usr_input);
  for (size_t i = 0; i < usr_input.length(); i++) {
    if (std::isdigit(usr_input[i]) == 0) {
      std::cout << "You need to put only numbers." << std::endl;
      return;
    }
  }
  nb = atoi(usr_input.c_str());
  if (nb < 1 || nb > i) {
    std::cout << "index or format not correct" << std::endl;
    if (i == 1)
      std::cout << "you have only 1 contact" << std::endl;
    else
      std::cout << "Only between 1 to " << i << std::endl;
    return;
  }
  nb--;
  this->my_contact[nb].full_print_data();
}

void PhoneBook::routine(void) {
  std::string usr_input("");
  int i;

  i = 0;
  do {
    std::cout << "pls type ADD, SEARCH or EXIT : ";
    ft_getline(usr_input);
    if (usr_input.compare("ADD") == 0) {
      this->my_contact[i % NUMBER].AddContact(i % NUMBER);
      i++;
    } else if (usr_input.compare("SEARCH") == 0) {
      if (i < NUMBER)
        search(i);
      else
        search(NUMBER);
    }
  } while (usr_input.compare("EXIT") != 0);
}
