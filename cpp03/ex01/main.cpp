#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  std::cout << "\n========== CLAPTRAP TESTS ==========\n" << std::endl;

  ClapTrap defaultClap;

  ClapTrap bob("Bob");

  std::cout << "\n----- Attack -----\n" << std::endl;
  bob.attack("Bandit");

  std::cout << "\n----- Take Damage -----\n" << std::endl;
  bob.takeDamage(3);

  std::cout << "\n----- Repair -----\n" << std::endl;
  bob.beRepaired(5);

  std::cout << "\n----- Kill ClapTrap -----\n" << std::endl;
  bob.takeDamage(20);

  std::cout << "\n----- Dead ClapTrap Actions -----\n" << std::endl;
  bob.attack("Nobody");
  bob.beRepaired(10);

  std::cout << "\n----- Copy Constructor -----\n" << std::endl;
  ClapTrap copyBob(bob);

  std::cout << "\n----- Assignment Operator -----\n" << std::endl;
  ClapTrap assigned;
  assigned = defaultClap;

	std::cout << "\n========== SCAVTRAP TESTS ==========\n" << std::endl;

  ScavTrap defaultScav;
  ScavTrap bryan("Bryan");

  std::cout << "\n----- Attack -----\n" << std::endl;
  bryan.attack("Psycho");

  std::cout << "\n----- Guard Gate -----\n" << std::endl;
  bryan.guardGate();

  std::cout << "\n----- Take Damage -----\n" << std::endl;
  bryan.takeDamage(40);

  std::cout << "\n----- Repair -----\n" << std::endl;
  bryan.beRepaired(25);

  std::cout << "\n----- Copy Constructor -----\n" << std::endl;
  ScavTrap clone(bryan);

  std::cout << "\n----- Assignment Operator -----\n" << std::endl;
  ScavTrap a("Assigned");
  a = bryan;

  std::cout << "\n----- Energy Depletion -----\n" << std::endl;
  for (int i = 0; i < 51; i++)
    bryan.attack("Training Dummy");

  std::cout << "\n----- Try Repair With No Energy -----\n" << std::endl;
  bryan.beRepaired(10);

  std::cout << "\n----- Kill ScavTrap -----\n" << std::endl;
  bryan.takeDamage(200);

  std::cout << "\n----- Dead ScavTrap Actions -----\n" << std::endl;
  bryan.attack("Ghost");
  bryan.beRepaired(10);

	std::cout << std::endl;

  return (0);
}
