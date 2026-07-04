#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "\n========== DEFAULT CONSTRUCTOR ==========\n";
    ClapTrap defaultTrap;

    std::cout << "\n========== PARAMETERIZED CONSTRUCTOR ==========\n";
    ClapTrap alice("Alice");

    std::cout << "\n========== COPY CONSTRUCTOR ==========\n";
    ClapTrap copy(alice);

    std::cout << "\n========== COPY ASSIGNMENT ==========\n";
    ClapTrap bob("Bob");
    bob = alice;

    std::cout << "\n========== SELF ASSIGNMENT ==========\n";
    ClapTrap &ref = bob;
    bob = ref;

    std::cout << "\n========== NORMAL ATTACK ==========\n";
    alice.attack("Enemy");

    std::cout << "\n========== TAKE DAMAGE ==========\n";
    alice.takeDamage(4);

    std::cout << "\n========== REPAIR ==========\n";
    alice.beRepaired(3);

    std::cout << "\n========== USE ALL ENERGY ==========\n";
    for (int i = 0; i < 10; i++)
        alice.attack("Enemy");

    std::cout << "\n========== NO ENERGY ==========\n";
    alice.attack("Enemy");
    alice.beRepaired(2);

    std::cout << "\n========== KILL THE CLAPTRAP ==========\n";
    alice.takeDamage(100);

    std::cout << "\n========== DEAD CLAPTRAP ==========\n";
    alice.attack("Enemy");
    alice.beRepaired(5);
    alice.takeDamage(1);

    return (0);
}
