#ifndef BRAIN_HPP

#define BRAIN_HPP
#include <string>

class Brain {
public:
  Brain();
  Brain(const Brain &);
  Brain &operator=(const Brain &);
  ~Brain();
  std::string get_ideas(unsigned int index) const;
  void set_ideas(unsigned int index, const std::string thaught);

private:
  std::string ideas[100];
};

#endif
