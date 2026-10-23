#include "FragTrap.hpp"

int main()  {
  FragTrap a("Fadi");
  
  FragTrap b(a);
  a.attack("Mansour");
  a.highFivesGuys();
  a.takeDamage(100);
  a.beRepaired(10);
  return 0;
}
