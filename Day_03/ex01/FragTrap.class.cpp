#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : _name("Unamed minion") {
	return;
}

FragTrap::FragTrap(std::string name) : _name(name), _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lvl(1), _meleeDamage(30), _rangeDamage(20), _armor(5) {
	std::cout << "Jack: Claptrap -- start bootup sequence." << std::endl << "Claptrap: Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Claptrap: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
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

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangeDamage << " points of damage !" << std::endl;
	return;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
	return;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (amount - this->_armor > this->_hp) {
		this->_hp = 0;
		std::cout << "FR4G-TP " << this->_name << " takes too much damage and his hp falls to 0" << std::endl;
	} else {
		this->_hp = this->_hp - amount + this->_armor;
		std::cout << "FR4G-TP " << this->_name << " takes damage and his hp are now " << this->_hp << std::endl;
	}
	return;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHp - this->_hp) {
		this->_hp = this->_maxHp;
		std::cout << "FR4G-TP " << this->_name << " gets heal to max hp" << std::endl;
	} else {
		this->_hp += amount;
		std::cout << "FR4G-TP " << this->_name << " gets heal and his hp are now " << this->_hp << std::endl;
	}
	return;
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