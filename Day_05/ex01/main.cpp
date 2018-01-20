#include <iostream>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void) {
	try {
		Bureaucrat b("B1", 10);
		Bureaucrat c("B2", 30);
		Form a("F1", 25, 15);
		std::cout << a;
		b.signForm(a);
		c.signForm(a);
	}
	catch (std::exception &e) {
		std::cout << " because his " << e.what() << std::endl;
	}
}