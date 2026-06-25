#include "inc/HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->_name = name;
  this->_weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void HumanB::attack() {
  if (_weapon) {
    std::cout << LPINK << this->_name << RES;
    std::cout << " attacks with their ";
    std::cout << DPINK << this->_weapon->getType() << RES << std::endl;
  } else {
    std::cout << LPINK << this->_name << RES;
    std::cout << " is not armed at the moment" << std::endl;
  }
}
