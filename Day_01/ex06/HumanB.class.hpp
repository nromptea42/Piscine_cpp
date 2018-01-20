#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H
# include "Weapon.class.hpp"
# include <string>

class HumanB {

public:

	HumanB (std::string name);
	~HumanB( void );

	Weapon* weapon;
	std::string name;
	void attack(void);
	void setWeapon(Weapon& weapon);

};

#endif