#include <iostream>
#include <string>
#include "Zombie.class.hpp"
#include "ZombieEvent.class.hpp"

int main(void) {
	ZombieEvent event;
	Zombie myFirstZombie("Zombio the Zombie", "Cheerful");
	event.setZombieType("Angry");
	Zombie *mySecondZombie = event.newZombie("Zombia the Zombie");
	delete(mySecondZombie);
	event.setZombieType("Slow");
	event.randomChump();

	return 0;
}