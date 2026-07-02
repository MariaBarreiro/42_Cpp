#include "Harl.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string level;
  Harl harl;
  if (ac != 1) {
    std::cout << PURPLE "Correct usage: ./Harl" RES << std::endl;
    return (1);
  }
  std::cout << LPINK "Choose a level: DEBUG, INFO, WARNING, ERROR" RES
            << std::endl;
  std::cin >> level;

  harl.complain(level);
  return (0);
}
