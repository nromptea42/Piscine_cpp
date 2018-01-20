#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H
# include <string>

class Brain {

public:

	Brain (void);
	~Brain (void);

	void* identify (void);
	void* address;
};

#endif