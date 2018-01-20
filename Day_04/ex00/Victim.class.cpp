#include <string>
#include <iostream>
#include "Victim.class.hpp"

Victim::Victim(void) : _name("Cute little victim") {
	std::cout << "Some random victim called " << this->_name << " just poped !"<< std::endl;
	return;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << name << " just poped !"<< std::endl;
	return;
}

Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim( Victim const & src ) {
	*this = src;
	return;
}

Victim &	Victim::operator=( Victim const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string Victim::getName(void) const {
	return this->_name;
}

std::ostream & operator<<( std::ostream & o, Victim const & rhs ) {
	o << "I'm " << rhs.getName() << ", and I like otters !" << std::endl;
	return (o);
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}