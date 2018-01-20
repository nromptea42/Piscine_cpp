#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap basic constructor" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << "Booting FragTrap" << std::endl;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Destroying FragTrap" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src ) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_ep >= 25) {
		this->_ep -= 25;
		int randomInt = rand();
		if (randomInt % 5 == 0) {
			std::cout << "Hey " << target << " ! Step right up, to the Bulletnator 9000!" << std::endl;
		} else if (randomInt % 5 == 1) {
			std::cout << "Hey " << target << " ! I am a tornado of death and bullets!" << std::endl;
		} else if (randomInt % 5 == 2) {
			std::cout << "Hey " << target << " ! Fall before your robot overlord!" << std::endl;
		} else if (randomInt % 5 == 3) {
			std::cout << "Hey " << target << " ! Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!" << std::endl;
		} else if (randomInt % 5 == 4) {
			std::cout << "Hey " << target << " ! Get ready for some Fragtrap face time!" << std::endl;
		}
	} else {
		std::cout << "No more energy :(" << std::endl;
	}
	return;
}