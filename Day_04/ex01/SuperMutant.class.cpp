#include <string>
#include <iostream>
#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "SuperMutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
	return;
}

SuperMutant::SuperMutant( SuperMutant const & src ) {
	*this = src;
	return;
}

SuperMutant &	SuperMutant::operator=( SuperMutant const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

void	SuperMutant::takeDamage(int damage) {
	if (damage < 0) {
		return;
	} else {
		this->_hp -= (damage - 3);
	}
	return;
}