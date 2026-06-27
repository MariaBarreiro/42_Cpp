#include "inc/Zombie.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string zombiesName;
  int zombieCount = 0;

  if (ac != 1) {
    std::cout << BLUE "Correct usage: ./ZombieHorde" RES << std::endl;
    return (1);
  }

  while (!std::cin.eof()) {
    std::cout << PURPLE
        "Enter number of zombies for the horde (between 0 and 100): " RES;
    std::cin >> zombieCount;
    if (zombieCount <= 0 || zombieCount > 100 || std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << BLUE "Invalid number. Try again!" RES << std::endl;
    } else
      break;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << LPINK "Enter name of the zombies: " RES;
  std::getline(std::cin, zombiesName);
  Zombie *horde = zombieHorde(zombieCount, zombiesName);
  if (!horde) {
    std::cout << BLUE "Memory allocation error, no horde created!" RES
              << std::endl;
    return (1);
  }

  for (int i = 0; i < zombieCount; i++)
    horde[i].announce();
  delete[] horde;
  return (0);
}
