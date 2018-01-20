#include <iostream>
#include <string>
#include "Weapon.class.hpp"

Weapon::Weapon(std::string type) : type(type) {
	return;
}

Weapon::~Weapon( void ) {
	
	// std::cout << "Weapon destroyed" << std::endl;
	return;
}

std::string& Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}