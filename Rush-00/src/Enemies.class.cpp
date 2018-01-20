#include <iostream>
#include "Enemies.class.hpp"

Enemies::Enemies(void) : AGameObject(1, 1, 1, 1, "*", 7)
{
	int randomInt = rand();
	std::string characters = "*VWT";
	_posX = randomInt % _maxWidth;
	_posY = (randomInt % _maxHeight) * -1;
	if (randomInt % 5 == 0) {
		_c = characters[randomInt % 4];
		_color = 3;
	} else if (randomInt % 5 == 1) {
		_c = characters[randomInt % 4];
		_color = 4;
	} else if (randomInt % 5 == 2) {
		_c = characters[randomInt % 4];
		_color = 5;
	}
	 else if (randomInt % 5 == 3) {
		_c = characters[randomInt % 4];
		_color = 6;
	}
	 else if (randomInt % 5 == 4) {
		_c = characters[randomInt % 4];
		_color = 7;
	}
	return;
}

// Enemies::Enemies(int posX, int posY, int hp, int damage, std::string c) : AGameObject(posX, posY, hp, damage, c) {
// 	return;
// }

Enemies::~Enemies(void)
{
	return;
}

Enemies::Enemies( Enemies const & src )
{
	*this = src;
	return;
}

Enemies &		Enemies::operator=( Enemies const & rhs )
{
	if (this != &rhs)
		*this = rhs;

	return *this;
}

void			Enemies::up()
{
	this->_posY -= 1;
}

void			Enemies::down()
{
	this->_posY += 1;
}

void			Enemies::left()
{
	this->_posX -= 1;
}

void			Enemies::right()
{
	this->_posX += 1;
}