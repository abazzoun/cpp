#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
    : ClapTrap() {
  health_ = 100;
  energy_ = 100;
  damage_ = 30;
  std::cout << "FragTrap " << name_ << " is constructed.\n";
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name) {
  health_ = 100;
  energy_ = 100;
  damage_ = 30;
  std::cout << "FragTrap " << name_ << " is constructed.\n";
}

FragTrap::FragTrap(const FragTrap& other)
    : ClapTrap(other) {
  std::cout << "FragTrap " << name_ << " is constructed by copying.\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << name_ << " is assigned by copying.\n";
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name_ << " is destroyed.\n";
}

void FragTrap::highFivesGuys() {
  std::cout << "Give me five!\n";
}
