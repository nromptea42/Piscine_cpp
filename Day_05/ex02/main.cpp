#include <iostream>
#include <ctime>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

int main(void) {
	std::srand(std::time(nullptr));
	try {
		Bureaucrat a("oui", 2);
		Bureaucrat b("oui", 15);

		Form *s = new Shrubbery("shrub");
		Form *r = new Robotomy("shrub");
		Form *p = new Presidential("shrub");

		b.signForm(*s);
		b.signForm(*r);
		b.signForm(*p);

		b.executeForm(*s);
		b.executeForm(*r);
		// b.executeForm(*p);
		a.executeForm(*p);
	}
	catch (std::exception &e) {
		std::cout << " because his " << e.what() << std::endl;
	}
}