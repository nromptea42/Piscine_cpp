#include <string>
#include <iostream>
#include "PowerFist.class.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

PowerFist::PowerFist( PowerFist const & src ) {
	*this = src;
	return;
}

PowerFist &	PowerFist::operator=( PowerFist const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}