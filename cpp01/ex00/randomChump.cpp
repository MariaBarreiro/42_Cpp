#include "inc/Zombie.hpp"

void randomChump(std::string name) {
  Zombie *zombie = Zombie::newZombie(name);
  zombie->announce();
  delete zombie;
}
