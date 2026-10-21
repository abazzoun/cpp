#include "Cat.hpp"
#include <iostream>

Cat::Cat() : type_("Cat") {
  std::cout << "Cat is created.\n";
}

Cat::Cat(const Cat& other) : type_("Cat") {
  std::cout << "Cat is copied.\n";
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    type_ = other.type_;
    std::cout << "Cat is equally assigned.\n";
  }
}
    
Cat::~Cat() {
  std::cout << "Cat is destructed.\n";
}

Cat::makeSound() override {
  std::cout << "meow\n";
}
