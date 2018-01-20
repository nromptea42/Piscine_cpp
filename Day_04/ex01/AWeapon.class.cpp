#include <string>
#include <iostream>
#include "AWeapon.class.hpp"

AWeapon::AWeapon(void) : _name("Random weapon"), _damage(15), _apcost(10) {
	return;
}

AWeapon::AWeapon(std::string const & name, int damage, int apcost) : _name(name), _damage(damage), _apcost(apcost) {
	return;
}

AWeapon::~AWeapon(void) {
	return;
}

AWeapon::AWeapon( AWeapon const & src ) {
	*this = src;
	return;
}

AWeapon &	AWeapon::operator=( AWeapon const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string AWeapon::getName(void) const {
	return this->_name;
}

int AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int AWeapon::getDamage(void) const {
	return this->_damage;
}