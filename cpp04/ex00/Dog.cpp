#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
  type_ = "Dog";
  std::cout << "Dog is created.\n";
}

Dog::Dog(const Dog& other) {
  if (this != &other)
    type_ = other.type_;
  std::cout << "Dog is copied.\n";
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other)
    type_ = other.type_;
  std::cout << "Dos is equally assignd\n";
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog is destroyed.\n";
}

void Dog::makeSound() const {
  std::cout << "3aw\n";
}
