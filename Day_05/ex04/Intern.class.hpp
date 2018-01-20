#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H
# include <string>
# include "Form.class.hpp"

class Intern {

public:
	Intern(void);
	virtual ~Intern(void);
	Intern( Intern const & src );
	Intern &	operator=( Intern const & rhs );

	class InternException : public std::exception {
		public:
			virtual const char * what() const throw();
	};

	Form * makeForm(std::string request, std::string target);
};

#endif