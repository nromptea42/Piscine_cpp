#include <iostream>
#include "Sorcerer.class.hpp"
#include "Victim.class.hpp"
#include "Peon.class.hpp"
#include "Zaz.class.hpp"

int main() {
    
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
	Peon joe("Joe");
	Zaz zaz("Zaz");
	std::cout << robert << jim << joe << zaz;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(zaz);
	return 0;
}