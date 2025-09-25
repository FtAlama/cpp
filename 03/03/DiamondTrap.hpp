#ifndef DIAMOND_TRAP_HPP

#define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
  DiamondTrap();
  DiamondTrap(const std::string &);
  DiamondTrap(const DiamondTrap &);
  DiamondTrap &operator=(const DiamondTrap &);
  ~DiamondTrap();
  void whoAmI();

private:
  std::string name;
	inline void init_value();
};

#endif // !DIAMOND_TRAP_HPP
