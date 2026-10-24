#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
  type_ = "Cat";
  brain_ = new Brain();
  std::cout << "Cat is created.\n";
}

Cat::Cat(const Cat& other) {
  type_ = other.type_;
  brain_ = new Brain(*other.brain_);
  std::cout << "Cat is copied.\n";
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    type_ = other.type_;
    brain_ = new Brain(*other.brain_);
    std::cout << "Cat is equally assigned.\n";
  }
  return *this;
}
    
Cat::~Cat() {
  delete brain_; 
  std::cout << "Cat is destroyed.\n";
}

void Cat::makeSound() const {
  std::cout << "meow\n";
}
