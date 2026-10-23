#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("Unknown_clap_name"), ScavTrap(), FragTrap(), name_("Unknown") {
  health_ = 100;
  energy_ = 50;
  damage_ = 30;
  std::cout << "DiamondTrap " << name_ << " is constructed.\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name), name_(name) {
  health_ = 100;
  energy_ = 50;
  damage_ = 30;
  std::cout << "DiamondTrap " << name_ << " is constructed.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name_(other.name_) {
  std::cout << "DiamondTrap " << name_ << " is constructed by copying.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    name_ = other.name_;
    std::cout << "DiamondTrap " << name_ << " is assigned by copying.\n";
  }
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << name_ << " is destroyed.\n";
}

void DiamondTrap::whoAmI() {
  std::cout
    << "DiamondTrap " << name_
    << " has ClapTrap name " << ClapTrap::name_ << ".\n";
}
