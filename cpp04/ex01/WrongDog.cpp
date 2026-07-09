#include "WrongDog.hpp"
#include "Animal.hpp"

WrongDog::WrongDog() : WrongAnimal() {
	this->_type = "WrongDog";
	std::cout << BLUE "WrongDog default constructor called" RES << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << BLUE "WrongDog was destroyed" RES << std::endl;
}

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal(other) {
	std::cout << BLUE "WrongDog copy constructor called" RES << std::endl;
	*this = other;
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
	std::cout << BLUE "WrongDog copy assignment operator called" RES << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	WrongDog::makeSound() const {
	std::cout << PINK "Woof Woof!" RES << std::endl;
}
