#include "inc/Zombie.hpp"

Zombie::Zombie(std::string name) { this->name = name; }

Zombie::~Zombie() {
  std::cout << DPINK "Zombie " << this->name << " was destroyed." RES << std::endl;
}

void Zombie::announce(void) {
  std::cout << PURPLE << this->name << ":  BraiiiiiiinnnzzzZ..." RES << std::endl;
}
