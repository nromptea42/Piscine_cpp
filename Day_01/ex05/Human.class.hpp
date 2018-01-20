#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H
# include "Brain.class.hpp"
# include <string>

class Human {
	
public:

	Human (void);
	~Human (void);

	Brain brain;
	Brain getBrain();
	void* identify();
};

#endif