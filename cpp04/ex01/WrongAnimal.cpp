#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << BLUE "Default animal constructor called" RES << std::endl;	
}

WrongAnimal::~WrongAnimal() {
	std::cout << BLUE "WrongAnimal was destroyed" RES << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << BLUE "WrongAnimal copy constructor called" RES << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << BLUE "WrongAnimal copy assignment operator called" RES << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

std::string const &WrongAnimal::getType() const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << LPINK "* generic animal sound *" RES << std::endl;
}
