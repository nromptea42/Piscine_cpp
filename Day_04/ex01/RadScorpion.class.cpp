#include <string>
#include <iostream>
#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion::RadScorpion( RadScorpion const & src ) {
	*this = src;
	return;
}

RadScorpion &	RadScorpion::operator=( RadScorpion const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}