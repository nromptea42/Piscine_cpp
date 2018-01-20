#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "NinjaTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

NinjaTrap::NinjaTrap(void) {
	std::cout << "NinjaTrap basic constructor" << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "Booting NinjaTrap" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Destroying NinjaTrap" << std::endl;
	return;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

NinjaTrap &	NinjaTrap::operator=( NinjaTrap const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

void NinjaTrap::ninjaShoebox( NinjaTrap & ninja ) {
	(void) ninja;
	std::cout << "DRAW" << std::endl;
	return;
}

void NinjaTrap::ninjaShoebox( ScavTrap & scav ) {
	(void) scav;
	std::cout << "WIN" << std::endl;
	return;	
}

void NinjaTrap::ninjaShoebox( FragTrap & frag ) {
	(void) frag;
	std::cout << "LOOSE" << std::endl;
	return;
}