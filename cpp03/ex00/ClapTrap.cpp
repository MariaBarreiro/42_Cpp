#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Default ClapTrap"), 
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << LPINK << this->_name << "was created" RES << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
	: _name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << LPINK << this->_name << "was created" RES << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << LPINK "Claptrap was destroyed" RES << std::endl;
}


