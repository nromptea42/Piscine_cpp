#include <string>
#include <iostream>
#include "Peon.class.hpp"

Peon::Peon(void) : Victim("Cute little peon") {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon::Peon( Peon const & src ) {
	*this = src;
	return;
}

Peon &	Peon::operator=( Peon const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}