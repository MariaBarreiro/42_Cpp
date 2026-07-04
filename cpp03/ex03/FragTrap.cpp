#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  std::cout << LPINK "FragTrap default constructor called." RES << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  std::cout << LPINK "FragTrap " << this->_name << " was created." RES
            << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << LPINK "FragTrap " << this->_name << " was destroyed." RES
            << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << LPINK "FragTrap copy constructor called." RES << std::endl;
  *this = other;
  std::cout << LPINK "FragTrap " << this->_name << " was created." RES
            << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << LPINK "FragTrap copy assignment operator called." RES
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

void	FragTrap::highFivesGuys(void){
	std::cout << PURPLE "FragTrap " << this->_name << " requests a positive high five!" RES << std::endl;
}
