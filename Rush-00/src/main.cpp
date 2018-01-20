#include <curses.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sys/time.h>
#include <unistd.h>
#include "../inc/Win.class.hpp"
#include "../inc/Ship.class.hpp"
#include "../inc/Missile.class.hpp"
#include "../inc/Enemies.class.hpp"
#include "../inc/AGameObject.class.hpp"

void			drawEnemies(Enemies *e, Win &win)
{
	for (int i = 0; i < NB_ENEMIES; i++)
		win.draw(e[i].getPosX(), e[i].getPosY(), e[i].getChar(), e[i].getColor());
}

void			moveEnemies(Enemies *e, Win &win)
{
	for(int i = 0; i < NB_ENEMIES; i++)
	{
		e[i].down();
		if (e[i].getPosY() == (win.getMaxHeight() - 1))
		{
			e[i].setPosY(-1);
			e[i].setPosX(rand() % win.getMaxWidth());
		}
	}
}

int 			main(void)
{
	std::srand(std::time(nullptr));
	Win			win;
	Ship 		s(&win);
	Enemies 	*e = new Enemies[NB_ENEMIES];

	double now;
	double afterLoop;
	double diff;
	struct timeval tp;

	while (s.getHp() > 0)
	{
		gettimeofday(&tp, NULL);
		now = tp.tv_sec * 1000 + tp.tv_usec / 1000;
		if (s.updateShip())
			break;
		moveEnemies(e, win);
		werase(win.win);
		box(win.win, '|', '-');
		box(win.scoreWin, '|', '-');
		win.drawHp(5, 2, s.getHp(), 5);
		win.drawScore(40, 2, s.getScore(), 4);
		s.drawShip();
		drawEnemies(e, win);
		wrefresh(win.win);
		wrefresh(win.scoreWin);
		s.checkCollide(e);
		s.checkCollideMissile(e);
		gettimeofday(&tp, NULL);
		afterLoop = tp.tv_sec * 1000 + tp.tv_usec / 1000;
		diff = afterLoop - now;
		if (diff <= TARGET_TIME)
			usleep((TARGET_TIME - diff) * 1000);
	}
	return 0;
}
