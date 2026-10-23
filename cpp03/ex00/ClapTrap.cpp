#include "ClapTrap.hpp"
#include <limits>
#include <iostream>

ClapTrap::ClapTrap() : name_("Unknown"), health_(10), energy_(10), damage_(0) {
  std::cout << "ClapTrap " << name_ << " is created.\n";
}

ClapTrap::ClapTrap(const std::string& name)
    : name_(name), health_(10), energy_(10), damage_(0) {
  std::cout << "ClapTrap " << name_ << " is created.\n";
}
    
ClapTrap::ClapTrap(const ClapTrap& other)
    : name_(other.name_),
      health_(other.health_),
      energy_(other.energy_),
      damage_(other.damage_) {
  std::cout << "ClapTrap " << name_ << " is constructed by copying.\n"; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if (this != &other) {
    name_ = other.name_;
    health_ = other.health_;
    energy_ = other.energy_;
    damage_ = other.damage_;
    std::cout << "ClapTrap " << name_ << " is assigned by copying.\n"; 
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
    std::cout << "ClapTrap " << name_ << " has no energy.\n";
    return ;
  }
  --energy_;
  std::cout
    << "ClapTrap " << name_ << " attacks " << target << ", causing " << damage_
    << (damage_ == 1 ? " point" : " points") << " of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (health_ <= 0) {
    std::cout << "ClapTrap " << name_ << " is dead.\n";
    return ;
  }
  if (amount >= static_cast<unsigned int>(health_)) {
    health_ = 0;
  }
  else {
    health_ -= amount;
  }
  std::cout
    << "ClapTrap " << name_ << " takes " << amount
    << (amount == 1 ? " point" : " points") << " of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (health_ <= 0) {
    std::cout << "ClapTrap " << name_ << " is dead.\n";
    return ;
  }
  if (energy_ <= 0) {
    std::cout << "ClapTrap " << name_ << " has no energy.\n";
    return ;
  }
  if (amount >
      static_cast<unsigned int>(std::numeric_limits<int>::max() - health_)) {
    health_ = std::numeric_limits<int>::max();
  }
  else {
    health_ += amount;
  }
  --energy_;
  std::cout
    << "ClapTrap " << name_ << " restores " << amount
    << (amount == 1 ? " point" : " points") << " of health!\n";
}
