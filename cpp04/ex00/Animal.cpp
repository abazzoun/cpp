#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type_("Animal") {
  std::cout << "Animal is created.\n";
}

Animal::Animal(const Animal& other) : type_(other.type_) {
  std::cout << "Animal is copied.\n";
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    type_ = other.type_;
    std::cout << "Animal is assigned.\n";
  }
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal is destroyed.\n";
}

std::string Animal::getType() const { return type_; }

void Animal::makeSound() const {
  std::cout << "...\n";
} 
