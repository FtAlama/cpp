#ifndef CLAP_TRAP_HPP

#define CLAP_TRAP_HPP

#include <string>

class ClapTrap {
public:
  ClapTrap();
  ClapTrap(const std::string &);
  ClapTrap(const ClapTrap &);
  ClapTrap &operator=(const ClapTrap &);
  virtual ~ClapTrap();
  void attack(const std::string &);
  void takeDamage(unsigned int);
  void beRepaired(unsigned int);
	std::string get_name() const;
  unsigned int get_hit() const;
  unsigned int get_energy() const;
  unsigned int get_attck() const;

protected:
  std::string name;
  unsigned int hit_point;
  unsigned int energy_point;
  unsigned int attck_dmg;
};

#endif
