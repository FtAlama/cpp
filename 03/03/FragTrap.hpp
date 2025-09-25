#ifndef FRAG_TRAP_HPP

# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
  FragTrap();
  FragTrap(const std::string &);
  FragTrap(const FragTrap &);
  FragTrap &operator=(const FragTrap &);
  ~FragTrap();
  void highFivesGuys();

private:
  inline void init_value();
};

#endif // !FRAG_TRAP_HPP
