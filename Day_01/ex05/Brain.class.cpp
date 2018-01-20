#include <string>
#include <iostream>
#include "Brain.class.hpp"

Brain::Brain(void) {
	this->address = (void *)this;
	return;
}

Brain::~Brain( void ) {
	return;
}

void* Brain::identify(void) {
	return this->address;
}