#include <iostream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"
#include "PresidentialPardonForm.class.hpp"

Presidential::Presidential(void) : Form("Presidential Random Form", 25, 5) {
	return;
}

Presidential::Presidential(std::string target) : Form("Presidential Form", 25, 5), _target(target) {
	return;
}

Presidential::~Presidential(void) {
	return;
}

Presidential::Presidential( Presidential const & src ) {
	*this = src;
	return;
}

Presidential &	Presidential::operator=( Presidential const & rhs) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string Presidential::getTarget() const {
	return this->_target;
}

void Presidential::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecGrade() || this->getSigned() == false) {
		std::cout << executor.getName() << " cannot execute " << this->getName() << " ";
		throw Form::GradeTooLowException();
	} else {
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	return;
}