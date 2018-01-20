#include <iostream>
#include "AGameObject.class.hpp"

AGameObject::AGameObject(void) : _posX(1), _posY(1), _hp(1), _damage(1), _c("#"), _color(7) {
	return;
}

AGameObject::AGameObject(int posX, int posY, int hp, int damage, std::string c, int color) : _posX(posX), _posY(posY), _hp(hp), _damage(damage), _c(c), _color(color) {
	return;
}

AGameObject::~AGameObject(void) {
	return;
}

AGameObject::AGameObject( AGameObject const & src ) {
	*this = src;
	return;
}

AGameObject &	AGameObject::operator=( AGameObject const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

void		AGameObject::setPosY(int value)
{
	_posY = value;
}

void		AGameObject::setPosX(int value)
{
	_posX = value;
}

int			AGameObject::getPosX() const {
	return this->_posX;
}

int			AGameObject::getPosY() const {
	return this->_posY;
}

int			AGameObject::getHp() const {
	return this->_hp;
}

int			AGameObject::getDamage() const {
	return this->_damage;
}

std::string	AGameObject::getChar() const {
	return this->_c;
}

int			AGameObject::getColor() const {
	return this->_color;
}

std::ostream & operator<<( std::ostream & o, AGameObject const & rhs ) {
	o << "Character : "<< rhs.getChar() << std::endl;
	o << "Position X : " << rhs.getPosX() << std::endl;
	o << "Position Y : " << rhs.getPosY() << std::endl;
	o << "Hp : " << rhs.getHp() << std::endl;
	o << "Damage : " << rhs.getDamage() << std::endl;
	return (o);
}