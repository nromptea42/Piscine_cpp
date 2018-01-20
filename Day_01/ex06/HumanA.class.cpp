#include <iostream>
#include <string>
#include "HumanA.class.hpp"
#include "Weapon.class.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	return;
}

HumanA::~HumanA( void ) {
	
	// std::cout << "HumanA destroyed" << std::endl;
	return;
}

void HumanA::attack(void) {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}