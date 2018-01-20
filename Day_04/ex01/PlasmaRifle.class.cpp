#include <string>
#include <iostream>
#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5) {
	return;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) {
	*this = src;
	return;
}

PlasmaRifle &	PlasmaRifle::operator=( PlasmaRifle const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}