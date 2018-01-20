#ifndef SHIP_CLASS_H
# define SHIP_CLASS_H

# include <string>
# include "AGameObject.class.hpp"
# include "Missile.class.hpp"
# include "Enemies.class.hpp"

class Ship : public AGameObject {

	public:

		Ship(void);
		Ship(Win *window);
		Ship( Ship const & src );
		virtual ~Ship(void);


		Ship 		&operator=( Ship const & rhs );

		void 		up();
		void 		down();
		void 		left();
		void 		right();
		bool		colision() const;
		void		newMissile(void);
		Missile		*getMissile(void) const;
		bool		updateShip(void);
		void		upadateMissile(void);
		void		drawShip(void) const;
		void		checkCollide(Enemies *e);
		void		checkCollideMissile(Enemies *e);
		int			getScore();

	private:

		Win 		*_window;
		Missile		*_missile;
		int			_nb;
		int			_score;
};

#endif