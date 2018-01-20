#include <string>
#include <iostream>
#include "OfficeBlock.class.hpp"

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signBureaucrat(NULL), _execBureaucrat(NULL) {
	return;
}

OfficeBlock::OfficeBlock(Intern * intern, Bureaucrat * signBureaucrat, Bureaucrat * execBureaucrat) : _intern(intern), _signBureaucrat(signBureaucrat), _execBureaucrat(execBureaucrat) {
	return;
}

OfficeBlock::~OfficeBlock(void) {
	return;
}

void OfficeBlock::setIntern(Intern * i) {
	this->_intern = i;
	return;
}

void OfficeBlock::setSigner(Bureaucrat * b) {
	this->_signBureaucrat = b;
	return;
}

void OfficeBlock::setExecuter(Bureaucrat * b) {
	this->_execBureaucrat = b;
	return;
}

void OfficeBlock::doBureaucracy(std::string request, std::string target) {
	if (this->_intern == NULL || this->_signBureaucrat == NULL || this->_execBureaucrat == NULL) {
		throw OfficeBlock::OfficeBlockException();
	}
	Form *newForm;
	newForm = this->_intern->makeForm(request, target);
	std::cout << "Intern creates a " << request << " form." << std::endl;
	this->_signBureaucrat->signForm(*newForm);
	this->_execBureaucrat->executeForm(*newForm);
	delete newForm;
}

const char *	OfficeBlock::OfficeBlockException::what() const throw() {
	return ("Please fill the office block");
}