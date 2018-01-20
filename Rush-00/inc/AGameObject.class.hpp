#ifndef AGAMEOBJECT_CLASS_H
# define AGAMEOBJECT_CLASS_H
# include <string>

# include "Win.class.hpp"

class AGameObject : public Win {

public:

	AGameObject(void);
	AGameObject(int posX, int posY, int hp, int damage, std::string c, int color);
	AGameObject( AGameObject const & src );
	virtual ~AGameObject();
	
	AGameObject &		operator=(AGameObject const &rhs);

	int 				getPosX(void) const;
	int 				getPosY(void) const;
	int 				getHp(void) const;
	int					getDamage(void) const;
	void				setPosY(int value);
	void				setPosX(int value);
	std::string			getChar(void) const;
	int					getColor(void) const;

	virtual void 		up(void) = 0;
	virtual void 		down(void) = 0;
	virtual void 		left(void) = 0;
	virtual void 		right(void) = 0;

protected:

	int					_posX;
	int					_posY;
	int					_hp;
	int					_damage;
	std::string			_c;
	int					_color;
};

std::ostream & operator<<( std::ostream & o, AGameObject const & rhs );

#endif