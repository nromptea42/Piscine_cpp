#include <iostream>
#include <fstream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

Shrubbery::Shrubbery(void) : Form("Shrubbery Random Form", 145, 137) {
	return;
}

Shrubbery::Shrubbery(std::string target) : Form("Shrubbery Form", 145, 137), _target(target) {
	return;
}

Shrubbery::~Shrubbery(void) {
	return;
}

Shrubbery::Shrubbery( Shrubbery const & src ) {
	*this = src;
	return;
}

Shrubbery &	Shrubbery::operator=( Shrubbery const & rhs) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::string Shrubbery::getTarget() const {
	return this->_target;
}

void Shrubbery::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecGrade() || this->getSigned() == false) {
		std::cout << executor.getName() << " cannot execute " << this->getName() << " ";
		throw Form::GradeTooLowException();
	} else {
		std::string filename = this->getTarget() += "_shrubbery";
		std::ofstream ofs(filename);

		ofs << "               ,@@@@@@@," << std::endl\
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl\
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl\
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl\
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl\
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl\
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl\
		<< "       |o|        | |         | |" << std::endl\
		<< "       |.|        | |         | |" << std::endl\
		<< "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		ofs.close();
	}
	return;
}