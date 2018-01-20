#ifndef PONY_CLASS_H
# define PONY_CLASS_H

#include <string>

class Pony {
	
public:

	Pony( std::string name );
	~Pony( void );
	std::string name;

};

#endif