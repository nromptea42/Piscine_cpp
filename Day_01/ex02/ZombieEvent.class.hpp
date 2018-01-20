#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

# include <string>
# include "Zombie.class.hpp"

class ZombieEvent {

public:

	std::string type;

	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump(void);

};

#endif