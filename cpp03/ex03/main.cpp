#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
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

    // ======================================================

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
    ScavTrap assignedScav("Assigned");
    assignedScav = bryan;

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

    // ======================================================

    std::cout << "\n========== FRAGTRAP TESTS ==========\n" << std::endl;

    FragTrap defaultFrag;
    FragTrap frank("Frank");

    std::cout << "\n----- Attack -----\n" << std::endl;
    frank.attack("Skag");

    std::cout << "\n----- High Fives -----\n" << std::endl;
    frank.highFivesGuys();

    std::cout << "\n----- Take Damage -----\n" << std::endl;
    frank.takeDamage(35);

    std::cout << "\n----- Repair -----\n" << std::endl;
    frank.beRepaired(20);

    std::cout << "\n----- Copy Constructor -----\n" << std::endl;
    FragTrap cloneFrag(frank);

    std::cout << "\n----- Assignment Operator -----\n" << std::endl;
    FragTrap assignedFrag("Assigned");
    assignedFrag = frank;

    std::cout << "\n----- Energy Depletion -----\n" << std::endl;
    for (int i = 0; i < 101; i++)
        frank.attack("Training Dummy");

    std::cout << "\n----- Try Repair With No Energy -----\n" << std::endl;
    frank.beRepaired(10);

    std::cout << "\n----- Kill FragTrap -----\n" << std::endl;
    frank.takeDamage(200);

    std::cout << "\n----- Dead FragTrap Actions -----\n" << std::endl;
    frank.attack("Ghost");
    frank.beRepaired(10);
    // ======================================================

    std::cout << "\n========== DIAMONDTRAP TESTS ==========\n" << std::endl;

    DiamondTrap defaultDiamond;
    DiamondTrap dylan("Dylan");

    std::cout << "\n----- Who Am I -----\n" << std::endl;
    dylan.whoAmI();

    std::cout << "\n----- Attack (ScavTrap version) -----\n" << std::endl;
    dylan.attack("Badass");

    std::cout << "\n----- Take Damage -----\n" << std::endl;
    dylan.takeDamage(45);

    std::cout << "\n----- Repair -----\n" << std::endl;
    dylan.beRepaired(30);

    std::cout << "\n----- Guard Gate -----\n" << std::endl;
    dylan.guardGate();

    std::cout << "\n----- High Fives -----\n" << std::endl;
    dylan.highFivesGuys();

    std::cout << "\n----- Copy Constructor -----\n" << std::endl;
    DiamondTrap cloneDiamond(dylan);

    std::cout << "\n----- Assignment Operator -----\n" << std::endl;
    DiamondTrap assignedDiamond("Assigned");
    assignedDiamond = dylan;

    std::cout << "\n----- Who Am I (Copy) -----\n" << std::endl;
    cloneDiamond.whoAmI();

    std::cout << "\n----- Who Am I (Assigned) -----\n" << std::endl;
    assignedDiamond.whoAmI();

    std::cout << "\n----- Energy Depletion -----\n" << std::endl;
    for (int i = 0; i < 51; i++)
        dylan.attack("Training Dummy");

    std::cout << "\n----- Try Repair With No Energy -----\n" << std::endl;
    dylan.beRepaired(10);

    std::cout << "\n----- Kill DiamondTrap -----\n" << std::endl;
    dylan.takeDamage(200);

    std::cout << "\n----- Dead DiamondTrap Actions -----\n" << std::endl;
    dylan.attack("Ghost");
    dylan.beRepaired(10);

    return (0);
}
