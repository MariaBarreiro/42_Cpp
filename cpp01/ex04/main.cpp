#include "Sed.hpp"

int main(int ac, char **av) {
  if (ac != 4) {
    std::cout << BLUE
        "Correct usage: ./Sed <filename> <string 1> <string 2>" RES
              << std::endl;
    return (1);
  }

  sed(av[1], av[2], av[3]);
  return (0);
}
