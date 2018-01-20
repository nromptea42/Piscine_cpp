#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H
# include "Weapon.class.hpp"
# include <string>

class HumanA {

public:

	HumanA (std::string name, Weapon& weapon);
	~HumanA( void );

	Weapon& weapon;
	std::string name;
	void attack(void);

};

#endif