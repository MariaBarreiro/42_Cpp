#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << PINK "Default constructor called" RES << std::endl;
}

Fixed::~Fixed(){
	std::cout << DPINK "Destructor called" RES << std::endl;
}
/*
Fixed::Fixed(const Fixed &other) : _value(other._value){
	std::cout << LPINK "Copy constructor called" RES << std::endl;
}*/
Fixed::Fixed(const Fixed &other){
 	std::cout << LPINK "Copy constructor called" RES << std::endl;
 	this->_value = other.getRawBits();;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << PURPLE "Copy assignment operator called" RES << std::endl;

	if (this != &other)
		this->_value = other.getRawBits();

	return *this;
}

int	Fixed::getRawBits () const{
	std::cout << BLUE "getRawBits member function called" RES << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
	std::cout << BLUE "setRawBits member function called" RES << std::endl;
	this->_value = raw;
}
