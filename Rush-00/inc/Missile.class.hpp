#ifndef MISSILE_CLASS_H
# define MISSILE_CLASS_H

# include <string>
# include "AGameObject.class.hpp"

class Missile : public AGameObject {

	public:

		Missile(void);
		Missile(int posX, int posY, int hp, int damage, std::string c);
		Missile( Missile const &src);
		virtual ~Missile(void);
		Missile &	operator=( Missile const & rhs );

		void 		up(void);
		void 		down(void);
		void 		left(void);
		void 		right(void);
		void		setUsed(bool value);
		bool		getUsed(void) const;
		void		updateEntity(void);


	private:

		bool		_used;
};

#endif