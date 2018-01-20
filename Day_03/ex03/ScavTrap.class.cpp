#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) {
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {
	std::cout << "Booting ScavTrap" << std::endl;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

void ScavTrap::challengeNewcomer() {
	int randomInt = rand();
	if (randomInt % 5 == 0) {
		std::cout << "ScavTrap : Here is my challenge, " << "Collect 139,377 brown rocks" << std::endl;
	} else if (randomInt % 5 == 1) {
		std::cout << "ScavTrap : Here is my challenge, " << "Defeat Ug-Thak, Lord of Skags" << std::endl;
	} else if (randomInt % 5 == 2) {
		std::cout << "ScavTrap : Here is my challenge, " << "Find lost staff of Mount Schuler" << std::endl;
	} else if (randomInt % 5 == 3) {
		std::cout << "ScavTrap : Here is my challenge, " << "Defeat Destroyer of Worlds" << std::endl;
	} else if (randomInt % 5 == 4) {
		std::cout << "ScavTrap : Here is my challenge, " << "Dance, dance, baby" << std::endl;
	}
	return;
}