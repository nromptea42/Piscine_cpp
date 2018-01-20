#include <iostream>
#include <string>
#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _name("Unamed ClapTrap") {
	std::cout << "ClapTrap basic constructor" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name, unsigned int _hp, unsigned int _maxHp, unsigned int _ep, unsigned int _maxEp, unsigned int _lvl, unsigned int _meleeDamage, unsigned int _rangeDamage, unsigned int _armor) : _name(name), _hp(_hp), _maxHp(_maxHp), _ep(_ep), _maxEp(_maxEp), _lvl(_lvl), _meleeDamage(_meleeDamage), _rangeDamage(_rangeDamage), _armor(_armor) {
	std::cout << "ClapTrap unit is constructed" << std::endl;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap unit is destroyed" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		*this = rhs;

	return *this;
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "ClapTrap Unit " << this->_name << " attacks " << target << " at range, causing " << this->_rangeDamage << " points of damage !" << std::endl;
	return;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "ClapTrap Unit " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount - this->_armor > this->_hp) {
		this->_hp = 0;
		std::cout << "ClapTrap Unit " << this->_name << " takes too much damage and his hp falls to 0" << std::endl;
	} else {
		this->_hp = this->_hp - amount + this->_armor;
		std::cout << "ClapTrap Unit " << this->_name << " takes damage and his hp are now " << this->_hp << std::endl;
	}
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHp - this->_hp) {
		this->_hp = this->_maxHp;
		std::cout << "ClapTrap Unit " << this->_name << " gets heal to max hp" << std::endl;
	} else {
		this->_hp += amount;
		std::cout << "ClapTrap Unit " << this->_name << " gets heal and his hp are now " << this->_hp << std::endl;
	}
	return;
}