#include <iostream>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

Form::Form(void) : _name("Random Form"), _signed(false), _gradeSign(150), _gradeExec(150) {
	return;
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (gradeSign > 150 || gradeExec > 150) {
		std::cout << "Rejected";
		throw Form::GradeTooLowException();
	} else if (gradeSign < 1 || gradeExec < 1) {
		std::cout << "Rejected";
		throw Form::GradeTooHighException();
	} 
	return;
}

Form::~Form(void) {
	return;
}

Form::Form( Form const & src ) : _gradeSign(src.getSignGrade()), _gradeExec(src.getExecGrade()) {
	*this = src;
	return;
}

Form &	Form::operator=( Form const & rhs) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::ostream & operator<<( std::ostream & o, Form const & rhs ) {
	o << "Name : " << rhs.getName() << "\nSigned : " << rhs.getSignedString() << "\nSign grade : " << rhs.getSignGrade() << "\nExec grade : " << rhs.getExecGrade() << std::endl;
	return (o);
}

std::string Form::getName() const {
	return this->_name;
}

unsigned int Form::getSignGrade() const {
	return this->_gradeSign;
}

unsigned int Form::getExecGrade() const {
	return this->_gradeExec;
}

bool Form::getSigned() const {
	return this->_signed;
}

std::string Form::getSignedString() const {
	if (this->_signed) {
		return ("signed");
	} else {
		return ("non signed");
	}
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->_gradeSign) {
		this->_signed = true;
		std::cout << b.getName() << " signs " << this->_name << std::endl;
	} else {
		std::cout << b.getName() << " cannot sign " << this->_name;
		throw Form::GradeTooLowException();
	}
}

const char *	Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *	Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}