#include <iostream>
#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(void) {
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade = grade;
	}
	return;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
	*this = src;
	return;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {
	if (this != &rhs)
		*this = rhs;

	return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::upGrade() {
	if (this->_grade == 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade -= 1;
	}
}

void	Bureaucrat::downGrade() {
	if (this->_grade == 150) {
		throw Bureaucrat::GradeTooLowException(); 
	} else {
		this->_grade += 1;
	}
}

void	Bureaucrat::signForm(Form &f) {
	f.beSigned(*this);
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}