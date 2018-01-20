#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H
# include <string>
# include "AWeapon.class.hpp"
# include "Enemy.class.hpp"

class Character {

public:

	Character(void);
	Character(std::string const & name);
	Character( Character const & src );
	~Character();
	Character &	operator=( Character const & rhs );

	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string getName() const;
	int	getAp() const;
	AWeapon * getWeapon() const;

private:

	std::string _name;
	int	_ap;
	AWeapon *_weapon;

};

std::ostream & operator<<( std::ostream & o, Character const & rhs );

#endif