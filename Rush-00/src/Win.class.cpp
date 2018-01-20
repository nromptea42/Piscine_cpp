/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Win.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvievill <rvievill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 09:53:01 by rvievill          #+#    #+#             */
/*   Updated: 2018/01/14 13:53:32 by rvievill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Win.class.hpp"

Win::Win(void)
{
	initscr();
	start_color();
	cbreak();
	init_pair(1,COLOR_GREEN, COLOR_BLACK);
	init_pair(2,COLOR_BLUE, COLOR_BLACK);
	init_pair(3,COLOR_RED, COLOR_BLACK);
	init_pair(4,COLOR_YELLOW, COLOR_BLACK);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(6, COLOR_CYAN, COLOR_BLACK);
	init_pair(7, COLOR_WHITE, COLOR_BLACK);
	getmaxyx(stdscr, _maxHeight, _maxWidth);			// init height and Height of term
	curs_set(0);										// remove cursor
	noecho();											// no display key press
	win = newwin(_maxHeight - 5, _maxWidth - 1, 1, 1);	// create window
	scoreWin = newwin(5, _maxWidth - 1, _maxHeight - 5, 1);
	nodelay(win, TRUE);
	getmaxyx(win, _maxHeight, _maxWidth);				// get size win
	keypad(win, TRUE);									// catch special key (arraow etc)
	return;
}
Win::Win(Win const &src)
{
	*this = src;
	return;
}

Win::~Win(void)
{
	endwin();
	return;
}

int Win::getMaxWidth() const {
	return this->_maxWidth;
}

int Win::getMaxHeight() const {
	return this->_maxHeight;
}

Win				&Win::operator=(Win const &rhs)
{
	_maxHeight = rhs._maxHeight;
	_maxWidth = rhs._maxWidth;
	win = rhs.win;
	return *this;
}

void			Win::draw(int x, int y, std::string const &c, int color) const
{
	if (y < _maxHeight - 1 && y > 0 && x > 0 && x < _maxWidth - 1) {
		wattron(win, COLOR_PAIR(color));
		mvwprintw(win, y, x, c.c_str());
		wattroff(win, COLOR_PAIR(color));
	}
}

void			Win::drawScore(int x, int y, int score, int color) const
{
	wattron(scoreWin, COLOR_PAIR(color));
	mvwprintw(scoreWin, y, x, "Votre score est de : %d", score);
	wattroff(scoreWin, COLOR_PAIR(color));
}

void			Win::drawHp(int x, int y, int hp, int color) const
{
	wattron(scoreWin, COLOR_PAIR(color));
	mvwprintw(scoreWin, y, x, "Vos hp sont de : %d     ", hp);
	wattroff(scoreWin, COLOR_PAIR(color));
}