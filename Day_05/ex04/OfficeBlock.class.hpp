#ifndef OFFICEBLOCKCLASS_H
# define OFFICEBLOCKCLASS_H
# include <string>
# include "Bureaucrat.class.hpp"
# include "Intern.class.hpp"

class OfficeBlock {
public:

	OfficeBlock(void);
	OfficeBlock(Intern * intern, Bureaucrat * signBureaucrat, Bureaucrat * execBureaucrat);
	virtual ~OfficeBlock(void);

	void setIntern(Intern * i);
	void setSigner(Bureaucrat * b);
	void setExecuter(Bureaucrat * b);

	void doBureaucracy(std::string request, std::string target);

	class OfficeBlockException : public std::exception {
		public:
			virtual const char * what() const throw();
	};

private:

	Intern * _intern;
	Bureaucrat * _signBureaucrat;
	Bureaucrat * _execBureaucrat;
};

#endif