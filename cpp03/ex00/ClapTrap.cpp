#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << LPINK "ClapTrap " << this->_name << " was created." RES
            << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << LPINK "ClapTrap " << this->_name << " was created." RES
            << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << LPINK "Claptrap " << this->_name << " was destroyed." RES
            << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << LPINK "Copy constructor called." RES << std::endl;
  *this = other;
  std::cout << LPINK "ClapTrap " << this->_name << " was created." RES
            << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << PINK "Copy assignment operator called." RES << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

void ClapTrap::attack(const std::string &target) {
  if (this->_hitPoints <= 0) {
    std::cout << DPINK "ClapTrap " << this->_name
              << " ran out of hit points and is dead." RES << std::endl;
    return;
  }
  if (this->_energyPoints <= 0) {
    std::cout << DPINK "ClapTrap " << this->_name
              << " has no energy left, therefore can't attack." RES
              << std::endl;
    return;
  }
  this->_energyPoints--;
  std::cout << BLUE "ClapTrap " << this->_name << " attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!" RES
            << std::endl;
  std::cout << BLUE "ClapTrap " << this->_name << " has now "
            << this->_energyPoints << " energy points." RES << std::endl;
  return;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (amount >= this->_hitPoints) {
    this->_hitPoints = 0;
    std::cout << DPINK "ClapTrap " << this->_name << " had " << this->_hitPoints
              << " health and took " << amount << " of damage." RES
              << std::endl;
    std::cout << DPINK "ClapTrap " << this->_name << " died." RES << std::endl;
    return;
  } else {
    this->_hitPoints -= amount;
    std::cout << PURPLE "ClapTrap " << this->_name << " takes " << amount
              << " amount of damage!" RES << std::endl;
    std::cout << PURPLE "ClapTrap " << this->_name << " health is now at "
              << this->_hitPoints << " points." RES << std::endl;
  }
  return;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints <= 0) {
    std::cout << DPINK "ClapTrap " << this->_name
              << " has no energy to repair itself." RES << std::endl;
    return;
  }
  if (this->_hitPoints <= 0) {
    std::cout << DPINK "ClapTrap " << this->_name
              << " can't repaired itself because he's dead." RES << std::endl;
    return;
  }
  this->_energyPoints--;
  this->_hitPoints += amount;
  std::cout << PINK "ClapTrap " << this->_name << " repaired itself with "
            << amount << " health points. " RES << std::endl;
  std::cout << PINK << this->_name << " has now " << this->_energyPoints
            << " energy points and " << this->_hitPoints
            << " health points." RES << std::endl;
  return;
}
