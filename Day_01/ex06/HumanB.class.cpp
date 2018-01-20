#include <iostream>
#include <string>
#include "HumanB.class.hpp"
#include "Weapon.class.hpp"

HumanB::HumanB(std::string name) : name(name) {
	return;
}

HumanB::~HumanB( void ) {
	
	// std::cout << "HumanB destroyed" << std::endl;
	return;
}

void HumanB::attack(void) {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}