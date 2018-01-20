#include <string>
#include <iostream>
#include "FragTrap.class.hpp"

int main(void) {
	std::srand(std::time(nullptr));
	FragTrap f1("F1");
	f1.rangedAttack("Mordekai");
	f1.meleeAttack("Roland");
	f1.takeDamage(30);
	f1.beRepaired(10);
	f1.takeDamage(110);
	f1.beRepaired(110);
	f1.vaulthunter_dot_exe("Jack");
	f1.vaulthunter_dot_exe("Jack");
	f1.vaulthunter_dot_exe("Jack");
	f1.vaulthunter_dot_exe("Jack");
	f1.vaulthunter_dot_exe("Jack");
}