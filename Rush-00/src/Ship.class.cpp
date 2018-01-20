#include <iostream>
#include "../inc/Ship.class.hpp"
#include <cmath>

Ship::Ship(void) : AGameObject(1, 1, 3, 1, "^", 1), _score(0){
	return;
}

Ship::Ship(Win *window) : AGameObject(window->getMaxWidth() / 2, window->getMaxHeight() - 2, 3, 1, "^", 1), _window(window), _score(0)
{
	_nb = _window->getMaxHeight() / 10;

	_missile = new Missile[_nb];
	return;
}

Ship::~Ship(void) {
	delete [] _missile;
	return;
}

Ship::Ship( Ship const & src ) {
	*this = src;
	return;
}

Ship &	Ship::operator=( Ship const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

void Ship::up() {
	if (_posY > 1)
		this->_posY -= 1;
}

void Ship::down() {
	if (_posY < _maxHeight - 2)
		this->_posY += 1;
}

void Ship::left() {
	if (_posX > 1)
		this->_posX -= 1;
}

void Ship::right() {
	if (_posX < _maxWidth - 2)
		this->_posX += 1;
}

int	Ship::getScore() {
	return this->_score;
}

void				Ship::newMissile(void)
{
	int				i;

	i = 0;
	while (i < _nb)
	{
		if (_missile[i].getUsed() == FALSE)
		{
			_missile[i].setUsed(TRUE);
			_missile[i].setPosX(_posX);
			_missile[i].setPosY(_posY - 1);
			break;
		}
		i++;
	}
}

Missile				*Ship::getMissile(void) const
{
	return (_missile);
}

bool				Ship::colision(void) const
{
	return (FALSE);
}

bool				Ship::updateShip(void)
{
	int				ch;

	if ((ch = wgetch(win)) != ERR)
	{
		if (ch == 27)
			return TRUE;
		if (ch == ' ')
			newMissile();
		if (ch == KEY_DOWN)
			down();
		else if (ch == KEY_LEFT)
			left();
		else if (ch == KEY_RIGHT)
			right();
		else if (ch == KEY_UP)
			up();
	}
	upadateMissile();
	return FALSE;
}

void				Ship::upadateMissile(void)
{
	int			i;

	i = 0;
	while (i < _nb)
	{
		if (_missile[i].getUsed() == TRUE)
		{
			_missile[i].setPosY(_missile[i].getPosY() - 1);
			if (_missile[i].getPosY() <= 1)
				_missile[i].setUsed(FALSE);
		}
		i++;
	}
}

void				Ship::drawShip(void) const
{
	int				i;

	i = 0;

	_window->draw(_posX, _posY, "^", _color);
	while (i < _nb)
	{
		if (_missile[i].getUsed() == TRUE)
			_window->draw(_missile[i].getPosX(), _missile[i].getPosY(), _missile[i].getChar(), _missile[i].getColor());
		i++;
	}
}

void			Ship::checkCollide(Enemies *e)
{
	for (int i = 0; i < NB_ENEMIES; i++) {
		if (_posX == e[i].getPosX() && _posY == e[i].getPosY()) {
			this->_hp--;
		}
	}
}

void			Ship::checkCollideMissile(Enemies *e)
{
	for(int j = 0; j < _nb; j++)
	{
		for (int i = 0; i < NB_ENEMIES; i++)
		{
			if (_missile[j].getUsed() && _missile[j].getPosX() == e[i].getPosX() && ((_missile[j].getPosY() == e[i].getPosY() || _missile[j].getPosY() == e[i].getPosY() + 1 )))
			{
				e[i].setPosY(-1);
				e[i].setPosX(rand() % _window->getMaxWidth());
				_missile[j].setUsed(FALSE);
				this->_score += 10;
				return;
			}
		}
	}

}