#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
# include <string>

class Weapon {

public:

	Weapon( std::string type );
	~Weapon( void );

	std::string type;
	std::string& getType();
	void setType(std::string type);

};

#endif