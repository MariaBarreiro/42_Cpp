#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "WrongCat";
	std::cout << BLUE "WrongCat default constructor called" RES << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << BLUE "WrongCat was destroyed" RES << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
	std::cout << BLUE "WrongCat copy constructor called" RES << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << BLUE "WrongCat copy assignment operator called" RES << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << DPINK "Meowwww!" RES << std::endl;
}
