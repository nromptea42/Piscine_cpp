#ifndef SHRUBERYCREATIONFORM_CLASS_H
# define SHRUBERYCREATIONFORM_CLASS_H
# include <string>
# include <stdexcept>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class Shrubbery : public Form {

public:
	Shrubbery(void);
	Shrubbery(std::string target);
	virtual ~Shrubbery(void);
	Shrubbery( Shrubbery const & src );
	Shrubbery &	operator=( Shrubbery const & rhs );

	void execute(Bureaucrat const & executor) const;

	std::string getTarget() const;

private:
	std::string _target;	
};

#endif