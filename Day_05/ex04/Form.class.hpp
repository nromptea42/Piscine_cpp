#ifndef FORM_CLASS_H
# define FORM_CLASS_H
# include <string>
# include <stdexcept>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {

public:
	Form(void);
	Form(std::string name, unsigned int gradeSign, unsigned int gradeExec);
	virtual ~Form(void);
	Form( Form const & src );
	Form &	operator=( Form const & rhs );

		class GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char * what() const throw();
	};

	std::string getName() const;
	bool getSigned() const;
	std::string getSignedString() const;
	unsigned int getSignGrade() const;
	unsigned int getExecGrade() const;

	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;

private:
	std::string const _name;
	bool _signed;
	unsigned int const _gradeSign;
	unsigned int const _gradeExec;

};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif