#ifndef SUPERMUTANT_CLASS_H
# define SUPERMUTANT_CLASS_H
# include "Enemy.class.hpp"
# include <string>

class SuperMutant : public Enemy {
public:

	SuperMutant(void);
	SuperMutant( SuperMutant const & src );
	~SuperMutant();
	SuperMutant &	operator=( SuperMutant const & rhs );

	void takeDamage(int);

};

#endif