#include "inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) { this->name = name; }

Zombie::~Zombie() {
  std::cout << DPINK "Zombie " << this->name << " was destroyed." RES << std::endl;
}

void Zombie::announce(void) {
  std::cout << PINK << this->name << ":  BraiiiiiiinnnzzzZ..." RES << std::endl;
}

void Zombie::setName(std::string name) { this->name = name; }
