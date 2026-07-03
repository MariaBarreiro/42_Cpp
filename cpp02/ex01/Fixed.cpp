#include "Fixed.hpp"


Fixed::Fixed() : _value(0) {
	std::cout << PINK "Default constructor called" RES << std::endl;
}

Fixed::~Fixed(){
	std::cout << DPINK "Destructor called" RES << std::endl;
}

Fixed::Fixed(const Fixed &other) {
 	std::cout << LPINK "Copy constructor called" RES << std::endl;
	*this = other;
}

Fixed::Fixed(const int nbr) :_value(nbr << _fractionalBits) {
	std::cout << BLUE "Int constructor called" RES << std::endl;
}

Fixed::Fixed(const float nbr) :_value(static_cast<int>(roundf(nbr * (1 << _fractionalBits)))){
	std::cout << PURPLE "Float constructor called" RES << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << LPINK "Copy assignment operator called" RES << std::endl;

	if (this != &other)
		this->_value = other._value;

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

int	Fixed::toInt(void) const{
	return (this->_value >> _fractionalBits);
}

float	Fixed::toFloat(void) const{
	return (static_cast<float>(this->_value) / (1 << _fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}
