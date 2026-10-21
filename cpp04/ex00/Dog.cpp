#include "Dog.cpp"

Dog::Dog() : type_("Dog") {
  std::cout << "Dog is created.\n";
}

Dog::Dog(const Dog& other) : type_("Dog") {
  std::cout << "Dog is copied.\n";
}

Dog& Dog::operator=(const Dog& other) {
  type_ = other.type_
  std::cout << "Dos is equally assignd\n";
}

Dog::~Dog() {
  std::cout << "Dog is destroyed\n";
}

void Dog::makeSound() override {
  std::cout << "3aw\n";
}
