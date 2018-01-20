#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : _name("Unamed minion") {
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lvl(1), _meleeDamage(20), _rangeDamage(15), _armor(3) {
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

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name << " use a range attack " << target << "causing " << this->_rangeDamage << " points of damage !" << std::endl;
	return;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name << " use a melee attack " << target << " causing " << this->_meleeDamage << " points of damage !" << std::endl;
	return;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (amount - this->_armor > this->_hp) {
		this->_hp = 0;
		std::cout << "ScavTrap " << this->_name << " takes too much damage and his hp falls to 0" << std::endl;
	} else {
		this->_hp = this->_hp - amount + this->_armor;
		std::cout << "ScavTrap " << this->_name << " takes damage and his hp are now " << this->_hp << std::endl;
	}
	return;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHp - this->_hp) {
		this->_hp = this->_maxHp;
		std::cout << "ScavTrap " << this->_name << " gets heal to max hp" << std::endl;
	} else {
		this->_hp += amount;
		std::cout << "ScavTrap " << this->_name << " gets heal and his hp are now " << this->_hp << std::endl;
	}
	return;
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