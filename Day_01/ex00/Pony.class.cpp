#include <iostream>
#include <string>
#include "Pony.class.hpp"

Pony::Pony( std::string nameSent ) : name(nameSent) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

Pony::~Pony( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}