#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
  std::cout << LPINK "DiamondTrap default constructor called." RES << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
	this->_name = name;
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
  std::cout << LPINK "DiamondTrap " << this->_name << " was created." RES
            << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << LPINK "DiamondTrap " << this->_name << " was destroyed." RES
            << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(), ScavTrap() {
  std::cout << LPINK "DiamondTrap copy constructor called." RES << std::endl;
  *this = other;
  std::cout << LPINK "DiamondTrap " << this->_name << " was created." RES
            << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  std::cout << LPINK "DiamondTrap copy assignment operator called." RES
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << PURPLE "I am " << this->_name << " and my grandparent is " << ClapTrap::_name << "!" RES << std::endl;
}


