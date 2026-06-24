#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
	std::string name;
	Weapon	*_weapon;

public:
	HumanB();
	HumanB(std::string);
	~HumanB();

	void	setWeapon(Weapon &Weapon);
	void attack();
};

#endif
