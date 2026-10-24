#include "Brain.hpp"

Brain::Brain() {
  for (int i = 0; i < 100; ++i)
    ideas_[i] = "*";
  std::cout << "Brain is created.\n";
}

Brain::Brain(const Brain& other) {
  for (int i = 0; i < 100; ++i)
    ideas_[i] = other.ideas_[i];
  std::cout << "Brain is constructed by copying.\n";
}

Brain& Brain::operator=(const Brain& other) {
  if (this != &other) {
    for (int i = 0; i < 100; ++i)
      ideas_[i] = other.ideas_[i];
    std::cout << "Brain is assigned by copying.\n";
  }
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain is destroyed.\n";
}
