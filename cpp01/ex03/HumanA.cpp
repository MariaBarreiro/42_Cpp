#include "inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(){
	return ;
}

void	HumanA::attack(){
	std::cout << PURPLE << this->_name << RES;
	std::cout	<< " attacks with their ";
	std::cout	<< BLUE << this->_weapon.getType() << RES << std::endl;
	
}
