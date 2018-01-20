#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H
# include <string>

class Enemy {

public:

	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy( Enemy const & src );
	virtual ~Enemy();
	Enemy &	operator=( Enemy const & rhs );

	std::string getType() const;
	int getHp() const;
	int getAlive() const;

	virtual void takeDamage(int);

protected:

	int	_hp;
	std::string _type;
	int _alive;

};

#endif