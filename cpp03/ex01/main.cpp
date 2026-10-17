#include "ScavTrap.hpp"


int main()  {
  ScavTrap a("Fadi");
  
  ScavTrap b(a);
  a.attack("Mansour");
  a.guardGate();
  a.takeDamage(100);
  a.beRepaired(10);
  return 0;
}
