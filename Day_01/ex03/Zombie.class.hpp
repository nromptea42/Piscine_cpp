#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

class Zombie {

public:

	Zombie ();
	~Zombie ( void );

	std::string name;
	std::string type;
	void announce( void );

};

#endif