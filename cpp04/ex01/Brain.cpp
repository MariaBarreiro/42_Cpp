#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < NBR_IDEAS; i++) {
		this->ideas[i] = "default";
	}
	std::cout << BLUE "Brain default constructor called" RES << std::endl;
}

Brain::~Brain() {
	std::cout << BLUE "Brain was detroyed" RES << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other;
	std::cout << BLUE "Brain copy constructor called" RES << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << BLUE "Brain copy assignment operator called" RES << std::endl;
	if (this != &other) {
		for (int i = 0; i < NBR_IDEAS; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

void	Brain::setIdea(unsigned int i, std::string const &idea) {
	if (i < NBR_IDEAS)
		this->ideas[i] = idea;
	else
		std::cout <<  DPINK "Index out of range" RES << std::endl;
}

std::string	Brain::getIdea(unsigned int i) const {
	if (i < NBR_IDEAS)
		return (this->ideas[i]);	
	else
		std::cout <<  DPINK "Index out of range" RES << std::endl;
	return ("");
}
