#include <iostream>
#include "Bureaucrat.class.hpp"

int main(void) {
	try {
		Bureaucrat a("a", 12);
		std::cout << a << std::endl;
		Bureaucrat b("b", 1);
		std::cout << b << std::endl;
		Bureaucrat c("c", 150);
		std::cout << "After initialisation at 150\n" << c << std::endl;
		c.upGrade();
		std::cout << "After up grade\n" << c << std::endl;
		c.downGrade();
		std::cout << "After down grade\n" << c << std::endl;
		std::cout << "Before down to 151\n" << std::endl;
		c.downGrade();
		std::cout << c << std::endl;
		// Bureaucrat d("d", 0);
		// std::cout << d << std::endl;
		// Bureaucrat e("e", 151);
		// std::cout << d << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
}