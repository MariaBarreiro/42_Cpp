#include "inc/Zombie.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string zombieName;

  if (ac != 1) {
    std::cout << "Correct usage: ./Zombie" << std::endl;
    return (1);
  }
  std::cout << "Enter name of the zombie: ";
  std::getline(std::cin, zombieName);
  Zombie *zombie = Zombie::newZombie(zombieName);
  if (!zombie) {
    std::cout << "Error creating zombie." << std::endl;
  }
  delete zombie;
  randomChump(zombieName);
  return (0);
}
