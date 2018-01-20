#include <iostream>
#include "Missile.class.hpp"

Missile::Missile(void) : AGameObject(1, 3, 1, 1, ".", 1), _used(FALSE) {
	return;
}

Missile::Missile(int posX, int posY, int hp, int damage, std::string c) : AGameObject(posX, posY, hp, damage, c, 1), _used(FALSE)
{
	return;
}

Missile::~Missile(void) {
	_used = FALSE;
	return;
}

Missile::Missile( Missile const & src ) {
	*this = src;
	return;
}

Missile &	Missile::operator=( Missile const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	Missile::up() {
	this->_posY -= 1;
}

void 	Missile::down() {
	this->_posY += 1;
}

void 	Missile::left() {
	this->_posX -= 1;
}

void 	Missile::right() {
	this->_posX += 1;
}

void	Missile::setUsed(bool value)
{
	_used = value;
}

bool	Missile::getUsed(void) const
{
	return (_used);
}

void	Missile::updateEntity(void)
{
	_posY--;
}