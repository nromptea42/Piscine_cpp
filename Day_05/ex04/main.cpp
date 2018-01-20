#include <iostream>
#include <ctime>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Intern.class.hpp"
#include "OfficeBlock.class.hpp"

int main(void) {
	std::srand(std::time(nullptr));
	try {
		Intern *intern = new Intern;
		Bureaucrat *b1 = new Bureaucrat("B1", 15);
		Bureaucrat *b2 = new Bureaucrat("B2", 1);

		OfficeBlock ob1(intern, b1, b2);
		ob1.doBureaucracy("robotomy request", "ROBOT");
		// ob1.doBureaucracy("roboto request", "ROBOT");

		// OfficeBlock ob2;
		// ob2.doBureaucracy("robotomy request", "ROBOT");

		// OfficeBlock ob3;

		// ob3.setIntern(intern);
		// ob3.setSigner(b1);
		// ob3.setExecuter(b2);
		// ob3.doBureaucracy("robotomy request", "ROBOT");
	}
	catch(OfficeBlock::OfficeBlockException &e) {
		std::cout << e.what() << std::endl;
	}
	catch(Intern::InternException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << " because his " << e.what() << std::endl;
	}
}