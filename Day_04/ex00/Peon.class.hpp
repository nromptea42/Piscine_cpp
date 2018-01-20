#ifndef PEON_CLASS_H
# define PEON_CLASS_H
# include <string>
# include "Victim.class.hpp"

class Peon : public Victim {

public:

	Peon(void);
	Peon(std::string name);
	Peon( Peon const & src );
	~Peon(void);
	Peon &	operator=( Peon const & rhs );

	void getPolymorphed() const;

};

#endif