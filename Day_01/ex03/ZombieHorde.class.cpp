#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.class.hpp"
#include "ZombieHorde.class.hpp"

ZombieHorde::ZombieHorde( int n ) : nb(n) {
	this->zombieHorde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		this->zombieHorde[i].type = "Hordlings";
		std::srand(std::time(nullptr));
		int randomInt = std::rand() + i;
		if (randomInt % 3 == 0) {
			this->zombieHorde[i].name = "Zombiu the Zombie";
		} else if (randomInt % 3 == 1) {
			this->zombieHorde[i].name = "Zombarg the Zombie";
		} else if (randomInt % 3 == 2) {
			this->zombieHorde[i].name = "Zomberk the Zombie";
		} else {
			this->zombieHorde[i].name = "Zombourt the Zombie";
		}
	}
	std::cout << "ZombieHorde created" << std::endl;
	return;
}

ZombieHorde::~ZombieHorde( void ) {
	
	delete [] this->zombieHorde;
	std::cout << "ZombieHorde destroyed" << std::endl;
	return;
}
void ZombieHorde::announce(void) {
	for(int i = 0; i < this->nb; i++) {
		this->zombieHorde[i].announce();
	}
}