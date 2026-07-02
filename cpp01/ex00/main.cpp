#include "Zombie.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string zombieName;

  if (ac != 1) {
    std::cout << BLUE "Correct usage: ./Zombie" RES << std::endl;
    return (1);
  }
  std::cout << LPINK "Enter name of the zombie: " RES;
  std::getline(std::cin, zombieName);
  Zombie *zombie = Zombie::newZombie(zombieName);
  if (!zombie) {
    std::cout << BLUE "Error creating zombie." RES << std::endl;
  }
  randomChump(zombieName);
  return (0);
}
