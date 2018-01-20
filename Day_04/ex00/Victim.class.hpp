#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H
# include <string>

class Victim {

public:

	Victim(void);
	Victim(std::string name);
	Victim( Victim const & src );
	~Victim(void);
	Victim &	operator=( Victim const & rhs );

	std::string getName(void) const;
	virtual void getPolymorphed() const;

protected:

	std::string _name;

};

std::ostream & operator<<( std::ostream & o, Victim const & rhs );

#endif