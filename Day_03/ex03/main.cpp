#include <string>
#include <iostream>
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

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
	ScavTrap s1("S1");
	s1.rangedAttack("Mordekai");
	s1.meleeAttack("Roland");
	s1.takeDamage(30);
	s1.beRepaired(10);
	s1.takeDamage(110);
	s1.beRepaired(110);
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	s1.challengeNewcomer();
	NinjaTrap n1("N1");
	n1.rangedAttack("Mordekai");
	n1.meleeAttack("Roland");
	n1.takeDamage(30);
	n1.beRepaired(10);
	n1.takeDamage(110);
	n1.beRepaired(110);
}