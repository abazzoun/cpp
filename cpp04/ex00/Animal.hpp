#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
 public:
  Anima();
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);
  ~Animal();

  std::string getType() const;

  virtual void makeSound();

 protected:
  std::string type_;
};

#endif
