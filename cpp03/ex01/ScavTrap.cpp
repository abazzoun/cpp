#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
  health_ = 100;
  energy_ = 50;
  damage_ = 20;
  std::cout << "ScavTrap " << name_ << " is created.\n";
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name_ << " is destroyed.\n";
}

void ScavTrap::attack(const std::string& target) {
  if (health_ <= 0) {
    std::cout << "ScavTrap " << name_ << " is dead.\n";
    return ;
  }
  if (energy_ <= 0) {
    std::cout << "ScavTrap " << name_ << " does not have energy.\n";
    return ;
  }
  --energy_;
  std::cout
    << "ScavTrap "  << name_ << " attacks " << target
    << " causing " << damage_ << " points of damage!\n";
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name_ << " is now in Gate keeper mode.\n";
}
