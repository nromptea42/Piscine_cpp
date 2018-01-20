#include <iostream>
#include <string>
#include "Zombie.class.hpp"

Zombie::Zombie() {
	return;
}

Zombie::~Zombie( void ) {
	
	std::cout << "Zombie destroyed" << std::endl;
	return;
}

void Zombie::announce( void ) {
	
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiinnnnnssss...." << std::endl;
	return;
}