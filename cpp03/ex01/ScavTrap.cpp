#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap()
    : ClapTrap() {
  health_ = 100;
  energy_ = 50;
  damage_ = 20;
  std::cout << "ScavTrap " << name_ << " is constructed.\n";
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
  health_ = 100;
  energy_ = 50;
  damage_ = 20;
  std::cout << "ScavTrap " << name_ << " is constructed.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other) {
  std::cout << "ScavTrap " << name_ << " is constructed by copying.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    std::cout << "ScavTrap " << name_ << " is assigned by copying.\n";
  }
  return *this;
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
    std::cout << "ScavTrap " << name_ << " has no energy.\n";
    return ;
  }
  --energy_;
  std::cout
    << "ScavTrap "  << name_ << " attacks " << target
    << ", causing " << damage_ << (damage_ == 1 ? " point" : " points") << " of damage!\n";
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name_ << " is now in gatekeeper mode.\n";
}
