#include <iostream>
#include "Intern.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

Intern::Intern(void) {
	return;
}

Intern::~Intern(void) {
	return;
}

Intern::Intern( Intern const & src ) {
	*this = src;
	return;
}

Intern &	Intern::operator=( Intern const & rhs) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

Form * Intern::makeForm(std::string request, std::string target) {
	if (request.compare("shrubbery creation") == 0) {
		return new Shrubbery(target);
	} else if (request.compare("robotomy request") == 0) {
		return new Robotomy(target);
	} else if (request.compare("presidential pardon") == 0) {
		return new Presidential(target);
	} else {
		throw Intern::InternException();
	}
}

const char *	Intern::InternException::what() const throw() {
	return ("Please provide the correct name of the form");
}