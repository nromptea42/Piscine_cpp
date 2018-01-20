#include <iostream>
#include "Pony.class.hpp"

void sayMyName(Pony& horse) {
	std::cout << horse.name << std::endl;
}

void ponyOnTheHeap(int shouldDelete) {

	Pony	*heap = new Pony("Heapo");
	sayMyName(*heap);
	if (shouldDelete) {
		delete heap;
	}
}

void ponyOnTheStack(void) {

	Pony stack("Stacky");
	sayMyName(stack);
}

int main(void) {
	std::cout << "Creating a pony on the heap without deleting" << std::endl;
	ponyOnTheHeap(0);
	std::cout << "Creating a pony on the heap and deleting it, destuctor will be called" << std::endl;
	ponyOnTheHeap(1);
	std::cout << "Creating a pony on the stack, destuctor will be called" << std::endl;
	ponyOnTheStack();
}