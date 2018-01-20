#include <iostream>
#include <string>

int main(void) {
	std::string		myString = "HI THIS IS BRAIN";
	std::string*	myStringPtr = &myString;
	std::string& 	myStringRef = myString;

	std::cout << "Using pointer : " << *myStringPtr << std::endl;
	std::cout << "Using reference : " << myStringRef << std::endl;

	return 0;
}