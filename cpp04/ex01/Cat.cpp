#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal() {
	this->_type = "Cat";
	std::cout << BLUE "Cat default constructor called" RES << std::endl;
}

Cat::~Cat() {
	std::cout << BLUE "Cat was destroyed" RES << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << BLUE "Cat copy constructor called" RES << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << BLUE "Cat copy assignment operator called" RES << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << DPINK "Meowwww!" RES << std::endl;
}
