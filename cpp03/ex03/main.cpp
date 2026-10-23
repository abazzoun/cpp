#include "DiamondTrap.hpp"

int main()  {
  DiamondTrap a("Fadi");
  a.whoAmI();
  a.attack("Mansour");
  a.guardGate();
  a.highFivesGuys();
  a.takeDamage(20);
  a.beRepaired(10);

  DiamondTrap b(a);
  b.whoAmI();
  b.attack("Hossam");

  DiamondTrap c;
  c.whoAmI();
  c = a;
  c.whoAmI();
  c.takeDamage(100);
  c.attack("Mel7em");
  c.beRepaired(10);

  return 0;
}
