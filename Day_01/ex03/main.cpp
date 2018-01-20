#include <iostream>
#include <string>
#include "Zombie.class.hpp"
#include "ZombieHorde.class.hpp"

int main(void) {
	ZombieHorde horde(10);
	horde.announce();

	return 0;
}