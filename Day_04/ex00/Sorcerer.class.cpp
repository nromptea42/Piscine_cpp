#include <string>
#include <iostream>
#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(void) : _name("Masked Sorcerer"), _title("The shadow") {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << name << ", " << title << ", is born !" << std::endl;
	return;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src ) {
	*this = src;
	return;
}

Sorcerer &	Sorcerer::operator=( Sorcerer const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs ) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}

void	Sorcerer::polymorph(Victim const & vic) const {
	vic.getPolymorphed();
	return;
}