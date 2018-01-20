#include <iostream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"
#include "RobotomyRequestForm.class.hpp"

Robotomy::Robotomy(void) : Form("Robotomy Random Form", 72, 45) {
	return;
}

Robotomy::Robotomy(std::string target) : Form("Robotomy Form", 72, 45), _target(target) {
	return;
}

Robotomy::~Robotomy(void) {
	return;
}

Robotomy::Robotomy( Robotomy const & src ) {
	*this = src;
	return;
}

Robotomy &	Robotomy::operator=( Robotomy const & rhs) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string Robotomy::getTarget() const {
	return this->_target;
}

void Robotomy::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecGrade() || this->getSigned() == false) {
		std::cout << executor.getName() << " cannot execute " << this->getName() << " ";
		throw Form::GradeTooLowException();
	} else {
		int randomInt = rand();
		std::cout << "* drill drill *" << std::endl;
		if (randomInt % 2 == 0) {
			std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
		} else {
			std::cout << this->getTarget() << " failed to be robotized." << std::endl;
		}
	}
	return;
}