#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string.h>

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(const std::string& name);
  ~ScavTrap();

  void attack(const std::string& other);
  void guardGate();
};

#endif
