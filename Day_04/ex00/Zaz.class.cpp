#include <string>
#include <iostream>
#include "Zaz.class.hpp"

Zaz::Zaz(void) : Victim("Cute little Zaz") {
	std::cout << "Zaz zaz." << std::endl;
	return;
}

Zaz::Zaz(std::string name) : Victim(name) {
	std::cout << "Zaz zaz." << std::endl;
	return;
}

Zaz::~Zaz(void) {
	std::cout << "I don't even know what I was doing here" << std::endl;
	return;
}

Zaz::Zaz( Zaz const & src ) {
	*this = src;
	return;
}

Zaz &	Zaz::operator=( Zaz const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

void Zaz::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a well writen subject !" << std::endl;
}