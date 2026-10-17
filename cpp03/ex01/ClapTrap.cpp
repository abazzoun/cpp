#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
    : name_(name), health_(10), energy_(10), damage_(0) {
  std::cout << "ClapTrap " << name_ << " is created.\n";
}
    
ClapTrap::ClapTrap(const ClapTrap& other)
    : name_(other.name_),
      health_(other.health_),
      energy_(other.energy_),
      damage_(other.damage_) {}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if (this != &other) {
    name_ = other.name_;
    health_ = other.health_;
    energy_ = other.energy_;
    damage_ = other.damage_;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name_ << " is destroyed.\n";
}

void ClapTrap::attack(const std::string& target) {
  if (health_ <= 0) {
    std::cout << "ClapTrap " << name_ << " is dead.\n";
    return ;
  }
  if (energy_ <= 0) {
    std::cout << "ClapTrap " << name_ << " does not have energy.\n";
    return ;
  }
  --energy_;
  std::cout
    << "ClapTrap " << name_ << " attacks " << target
    << " causing " << damage_ << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (health_ <= 0) {
    std::cout << "ClapTrap " << name_ << " is dead.\n";
    return ;
  }
  health_ -= amount;
  if (health_ < 0) health_ = 0;
  std::cout
    << "ClapTrap " << name_
    << " takes " << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (health_ <= 0) {
    std::cout << "ClapTrap " << name_ << " is dead.\n";
    return ;
  }
  if (energy_ <= 0) {
    std::cout << "ClapTrap " << name_ << " does not have energy.\n";
    return ;
  }
  health_ += amount;
  --energy_;
  std::cout
    << "ClapTrap " << name_
    << " repairs " << amount << " points of health!\n";
}
