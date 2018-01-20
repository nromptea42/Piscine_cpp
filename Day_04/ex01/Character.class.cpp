#include <string>
#include <iostream>
#include "Character.class.hpp"
#include "AWeapon.class.hpp"
#include "Enemy.class.hpp"

Character::Character(void) : _name("Random Character"), _ap(40) {
	return;
}

Character::Character(std::string const & name) : _name(name), _ap(40) {
	return;
}

Character::~Character(void) {
	return;
}

Character::Character( Character const & src ) {
	*this = src;
	return;
}

Character &	Character::operator=( Character const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string	Character::getName() const {
	return this->_name;
}

int	Character::getAp() const {
	return this->_ap;
}

AWeapon * Character::getWeapon() const {
	return this->_weapon;
}

std::ostream & operator<<( std::ostream & o, Character const & rhs ) {
	AWeapon *weapon = rhs.getWeapon();
	if (!weapon) {
		o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
	} else {
		o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << weapon->getName() << std::endl;
	}
	return (o);
}

void	Character::recoverAP() {
	if (this->_ap + 10 < 40)
		this->_ap += 10;
	else
		this->_ap = 40;
}

void	Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

void	Character::attack(Enemy *enemy) {
	if (enemy->getAlive() == 0) {
		return;
	}
	if (!this->_weapon) {
		return;
	}
	if (this->_ap - this->_weapon->getAPCost() < 0) {
		return;
	}
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	this->_ap -= this->_weapon->getAPCost();
	if (enemy->getHp() < 0) {
		delete enemy;
	}
}