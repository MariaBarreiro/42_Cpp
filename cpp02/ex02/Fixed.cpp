#include "Fixed.hpp"


Fixed::Fixed() : _value(0) {
	std::cout << PINK "Default constructor called" RES << std::endl;
}

Fixed::~Fixed(){
	std::cout << DPINK "Destructor called" RES << std::endl;
}

Fixed::Fixed(const Fixed &other) : _value(other._value) {
 	std::cout << LPINK "Copy constructor called" RES << std::endl;
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
	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
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

bool Fixed::operator>(const Fixed &other) const {
	return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed	result;
	result.setRawBits(this->_value + other._value);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed	result;
	result.setRawBits(this->_value - other._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed	result;
	long long temp;

	temp = static_cast<long long>(this->_value) * static_cast<long long>(other._value);
	result.setRawBits(temp >> _fractionalBits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed	result;
	long long temp;

	temp = static_cast<long long>(_value) << _fractionalBits;
	result.setRawBits(temp / other._value);
	return (result);
}

Fixed &Fixed::operator++(void){
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--(void){
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed	temp(*this);

	this->_value++;
	return (temp);
}

Fixed Fixed::operator--(int){
	Fixed	temp(*this);

	this->_value--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if (a > b)
		return (b);
	return (a);
}
