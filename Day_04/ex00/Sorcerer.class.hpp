#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H
# include <string>
# include "Victim.class.hpp"

class Sorcerer {

public:

	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	Sorcerer( Sorcerer const & src );
	~Sorcerer(void);
	Sorcerer &	operator=( Sorcerer const & rhs );

	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &) const;

private:

	std::string _name;
	std::string _title;

};

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs );

#endif