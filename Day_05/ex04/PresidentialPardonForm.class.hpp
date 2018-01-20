#ifndef PRESIDENTIALCREATIONFORM_CLASS_H
# define PRESIDENTIALCREATIONFORM_CLASS_H
# include <string>
# include <stdexcept>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class Presidential : public Form {

public:
	Presidential(void);
	Presidential(std::string target);
	virtual ~Presidential(void);
	Presidential( Presidential const & src );
	Presidential &	operator=( Presidential const & rhs );

	void execute(Bureaucrat const & executor) const;

	std::string getTarget() const;

private:
	std::string _target;	
};

#endif