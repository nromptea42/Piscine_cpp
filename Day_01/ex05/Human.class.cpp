#include <iostream>
#include <string>
#include "Human.class.hpp"
#include "Brain.class.hpp"

Human::Human(void) {
	Brain myNewBrain;
	this->brain = myNewBrain;
}

Human::~Human( void ) {
	return;
}

Brain Human::getBrain() {
	return this->brain;
}

void* Human::identify(void) {
	return this->brain.identify();
}