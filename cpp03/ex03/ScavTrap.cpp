#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  std::cout << LPINK "ScavTrap default constructor called." RES << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  std::cout << LPINK "ScavTrap " << this->_name << " was created." RES
            << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << LPINK "ScavTrap " << this->_name << " was destroyed." RES
            << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << LPINK "ScavTrap copy constructor called." RES << std::endl;
  *this = other;
  std::cout << LPINK "ScavTrap " << this->_name << " was created." RES
            << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << LPINK "ScavTrap copy assignment operator called." RES
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
  }
  return (*this);
}

void ScavTrap::attack(const std::string &target) {
  if (this->_hitPoints <= 0) {
    std::cout << DPINK "ScavTrap " << this->_name
              << " ran out of hit points and is dead." RES << std::endl;
    return;
  }
  if (this->_energyPoints <= 0) {
    std::cout << DPINK "ScavTrap " << this->_name
              << " has no energy left, therefore can't attack." RES
              << std::endl;
    return;
  }
  this->_energyPoints--;
  std::cout << BLUE "ScavTrap " << this->_name << " attacks " << target
            << ", causing " << this->_attackDamage << " points of damage!" RES
            << std::endl;
  std::cout << BLUE "ScavTrap " << this->_name << " has now "
            << this->_energyPoints << " energy points." RES << std::endl;
  return;
}

void	ScavTrap::guardGate() {
	if (this->_hitPoints > 0){
		std::cout << BLUE "ScavTrap " << this->_name << " is now in Gate keeper mode." RES << std::endl;
		return ;
	}
	std::cout << DPINK "ScavTrap " << this->_name << "has no health to guard the gate." RES << std::endl; 
	return ;
}
