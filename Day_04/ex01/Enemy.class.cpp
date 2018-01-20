#include <string>
#include <iostream>
#include "Enemy.class.hpp"

Enemy::Enemy(void) : _hp(100), _type("Random enemy"), _alive(1) {
	return;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type), _alive(1) {
	return;
}

Enemy::~Enemy(void) {
	this->_alive = 0;
	return;
}

Enemy::Enemy( Enemy const & src ) {
	*this = src;
	return;
}

Enemy &	Enemy::operator=( Enemy const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string Enemy::getType() const {
	return this->_type;
};

int Enemy::getHp() const {
	return this->_hp;
};

int Enemy::getAlive() const {
	return this->_alive;
}

void	Enemy::takeDamage(int damage) {
	if (damage < 0) {
		return;
	} else {
		this->_hp -= damage;
	}
}