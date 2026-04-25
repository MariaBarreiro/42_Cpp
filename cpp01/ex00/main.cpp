#include "Zombie.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string zombieName;
  Zombie *zombie;

  if (ac != 1) {
    std::cout << "Correct usage: ./Zombie" << std::endl;
    return (1);
  }
  std::cout << "Enter name of the zombie: ";
  std::getline(std::cin, zombieName);
  zombie = new Zombie(zombieName);
  if (!zombie) {
    std::cout << "Error creating zombie." << std::endl
  }
}
