#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H
# include <string>
# include <stdexcept>
# include "Form.class.hpp"

class Form;

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat(void);
	Bureaucrat( Bureaucrat const & src );
	Bureaucrat &	operator=( Bureaucrat const & rhs );

	std::string getName() const;
	unsigned int getGrade() const;

	void upGrade();
	void downGrade();

	class GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char * what() const throw();
	};

	void signForm(Form &s);
	void executeForm(Form const & form);

private:
	std::string const _name;
	unsigned int _grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif