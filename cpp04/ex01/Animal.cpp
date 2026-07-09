#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << BLUE "Default animal constructor called" RES << std::endl;	
}

Animal::~Animal() {
	std::cout << BLUE "Animal was destroyed" RES << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << BLUE "Animal copy constructor called" RES << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << BLUE "Animal copy assignment operator called" RES << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

std::string const &Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound() const {
	std::cout << LPINK "* generic animal sound *" RES << std::endl;
}
