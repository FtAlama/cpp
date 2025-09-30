#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ScavTrap(const std::string &);
  ScavTrap(const ScavTrap &);
  ScavTrap &operator=(const ScavTrap &);
  ~ScavTrap();
  void guardGate();
  void attack();
	using ClapTrap::attack;

private:
  inline void init_value();
};

#endif
