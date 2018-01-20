#ifndef ZAZ_CLASS_H
# define ZAZ_CLASS_H
# include <string>
# include "Victim.class.hpp"

class Zaz : public Victim {

public:

	Zaz(void);
	Zaz(std::string name);
	Zaz( Zaz const & src );
	~Zaz(void);
	Zaz &	operator=( Zaz const & rhs );

	void getPolymorphed() const;

};

#endif