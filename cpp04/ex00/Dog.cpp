#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal() {
	this->_type = "Dog";
	std::cout << BLUE "Dog default constructor called" RES << std::endl;
}

Dog::~Dog() {
	std::cout << BLUE "Dog was destroyed" RES << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << BLUE "Dog copy constructor called" RES << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << BLUE "Dog copy assignment operator called" RES << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << PINK "Woof Woof!" RES << std::endl;
}
