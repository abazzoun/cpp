#include "ClapTrap.hpp"


int main()  {
  ClapTrap a("Fadi");
  ClapTrap b(a);

  b.attack("Hossam");

  b.takeDamage(3);
  b.beRepaired(5);
  b.takeDamage(14);
  b.attack("Mel7em"); 

  return 0;
}
