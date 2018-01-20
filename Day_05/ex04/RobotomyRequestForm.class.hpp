#ifndef ROBOTOMYCREATIONFORM_CLASS_H
# define ROBOTOMYCREATIONFORM_CLASS_H
# include <string>
# include <stdexcept>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class Robotomy : public Form {

public:
	Robotomy(void);
	Robotomy(std::string target);
	virtual ~Robotomy(void);
	Robotomy( Robotomy const & src );
	Robotomy &	operator=( Robotomy const & rhs );

	void execute(Bureaucrat const & executor) const;

	std::string getTarget() const;

private:
	std::string _target;	
};

#endif