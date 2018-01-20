#include <iostream>
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Character.class.hpp"

int main(void) {
	PlasmaRifle *p = new PlasmaRifle;
	PowerFist *f = new PowerFist;

	Enemy *s = new SuperMutant;
	// Enemy *r = new RadScorpion;

	Character *c = new Character("nat");
	c->attack(s);
	std::cout << *c;
	c->equip(p);
	std::cout << *c;
	c->equip(f);
	std::cout << *c;

	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;
	c->attack(s);
	std::cout << *c;

	return 0;
}