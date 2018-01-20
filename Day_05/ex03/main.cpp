#include <iostream>
#include <ctime>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Intern.class.hpp"

int main(void) {
	std::srand(std::time(nullptr));
	try {
		Bureaucrat a("oui", 2);
		
		Intern intern;
		Form *rrf;
		Form *rrf2;
		Form *rrf3;

		rrf = intern.makeForm("robotomy request", "ROBOT");
		a.signForm(*rrf);
		a.executeForm(*rrf);

		rrf2 = intern.makeForm("presidential pardon", "PRESIDENTIAL");
		a.signForm(*rrf2);
		a.executeForm(*rrf2);

		rrf3 = intern.makeForm("lol", "lol");
		a.signForm(*rrf3);
		a.executeForm(*rrf3);
	}
	catch(Intern::InternException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << " because his " << e.what() << std::endl;
	}
}