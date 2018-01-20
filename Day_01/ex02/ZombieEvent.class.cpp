#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.class.hpp"
#include "ZombieEvent.class.hpp"

void ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, this->type);
}

void ZombieEvent::randomChump() {
	std::srand(std::time(nullptr));
	int randomInt = std::rand();
	if (randomInt % 3 == 0) {
		Zombie *newOne = this->newZombie("Zombiu the Zombie");
		delete newOne;
	} else if (randomInt % 3 == 1) {
		Zombie *newOne = this->newZombie("Zombarg the Zombie");
		delete newOne;
	} else if (randomInt % 3 == 2) {
		Zombie *newOne = this->newZombie("Zomberk the Zombie");
		delete newOne;
	} else {
		Zombie *newOne = this->newZombie("Zombourt the Zombie");
		delete newOne;
	}
}