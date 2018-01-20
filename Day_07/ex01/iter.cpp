#include <iostream>

template< typename T >
void	iter( T * array, int len, void (AH)(T elem) ) {
	for (int i = 0; i < len; i++) {
		AH(array[i]);
	}
}

template< typename T >
void	printIt(T elem) {
	std::cout << elem << std::endl;
}

void	printInteger(int elem) {
	std::cout << elem << std::endl;
}

void	printFloat(float elem) {
	std::cout << elem << std::endl;
}

void	printString(std::string elem) {
	std::cout << elem << std::endl;
}

int main(void) {

	int                arrI[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    float            	arrF[] = {0.354, 1.354, 2.9875, 3.65324, 4.87654, 5.654555, 6.658, 7.54223, 8.31654};
    std::string        arrS[] = {"oi", "mate", "wats", "up"};

    iter(arrI, 13, &printIt);
    iter(arrF, 9, &printIt);
    iter(arrS, 4, &printIt);

    iter(arrI, 13, &printInteger);
    iter(arrF, 9, &printFloat);
    iter(arrS, 4, &printString);
}