#include <iostream>
#include "Array.class.hpp"

int main(void) {

	// std::cout << "TEST WITH INT" << std::endl;
	
	// Array<int> a(5);
	// Array<int> b(12);

	// std::cout << a.size() << std::endl;
	// std::cout << b.size() << std::endl;

	// a[0] = 0;
	// a[1] = 1;
	// a[2] = 2;

	// Array<int> c(a);

	// std::cout << a[0] << a[1] << a[2] << std::endl;
	// std::cout << c[0] << c[1] << c[2] << std::endl << std::endl;
	
	// c[0] = 3;
	// c[1] = 4;
	// c[2] = 5;

	// std::cout << a[0] << a[1] << a[2] << std::endl;
	// std::cout << c[0] << c[1] << c[2] << std::endl << std::endl;

	// Array<int> d = a;

	// std::cout << a[0] << a[1] << a[2] << std::endl;
	// std::cout << d[0] << d[1] << d[2] << std::endl << std::endl;

	// d[0] = 6;
	// d[1] = 7;
	// d[2] = 8;

	// std::cout << a[0] << a[1] << a[2] << std::endl;
	// std::cout << d[0] << d[1] << d[2] << std::endl;



	// std::cout << "TEST WITH FLOAT" << std::endl;

	// Array<float> a(5);
	// Array<float> b(12);

	// std::cout << a.size() << std::endl;
	// std::cout << b.size() << std::endl;

	// a[0] = 0.1f;
	// a[1] = 1.1f;
	// a[2] = 2.1f;

	// Array<float> c(a);

	// std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	// std::cout << c[0] << " " << c[1] << " " << c[2] << std::endl << std::endl;
	
	// c[0] = 3.1f;
	// c[1] = 4.1f;
	// c[2] = 5.1f;

	// std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	// std::cout << c[0] << " " << c[1] << " " << c[2] << std::endl << std::endl;

	// Array<float> d = a;

	// std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	// std::cout << d[0] << " " << d[1] << " " << d[2] << std::endl << std::endl;

	// d[0] = 6.1f;
	// d[1] = 7.1f;
	// d[2] = 8.1f;

	// std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	// std::cout << d[0] << " " << d[1] << " " << d[2] << std::endl;



	std::cout << "TEST WITH STRING" << std::endl;

	Array<std::string> a(5);
	Array<std::string> b(12);

	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;

	a[0] = "aa";
	a[1] = "bb";
	a[2] = "cc";

	Array<std::string> c(a);

	std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	std::cout << c[0] << " " << c[1] << " " << c[2] << std::endl << std::endl;
	
	c[0] = "dd";
	c[1] = "ee";
	c[2] = "ff";

	std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	std::cout << c[0] << " " << c[1] << " " << c[2] << std::endl << std::endl;

	Array<std::string> d = a;

	std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	std::cout << d[0] << " " << d[1] << " " << d[2] << std::endl << std::endl;

	d[0] = "gg";
	d[1] = "hh";
	d[2] = "ii";

	std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
	std::cout << d[0] << " " << d[1] << " " << d[2] << std::endl;
	
	return (0);
}