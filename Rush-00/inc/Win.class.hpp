/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Win.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvievill <rvievill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 09:49:30 by rvievill          #+#    #+#             */
/*   Updated: 2018/01/14 11:52:54 by rvievill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIN_HPP
# define WIN_HPP

# include <curses.h>
# include <iostream>
# include <string>
// # include "Ship.class.hpp"
// # include "Enemies.classp.hpp"

# define NB_ENEMIES 150
# define TARGET_TIME 80

class Win {

	public:

		Win(void);
		Win(Win const &src);
		virtual ~Win(void);

		WINDOW		*win;
		WINDOW		*scoreWin;
		Win			&operator=(Win const &rhs);
		void		draw(int x, int y, std::string const &c, int color) const;
		void		drawScore(int x, int y, int score, int color) const;
		void		drawHp(int x, int y, int hp, int color) const;
		int			getMaxWidth() const;
		int			getMaxHeight() const;

	protected:

		int			_maxHeight;
		int			_maxWidth;
		
};

#endif