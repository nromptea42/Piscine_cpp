#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

class ZombieHorde {

public:

	ZombieHorde ( int n );
	~ZombieHorde ( void );

	int nb;
	Zombie *zombieHorde;
	void announce(void);

};

#endif